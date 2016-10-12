#!/bin/sh -
#
# Copyright (c) 1984, 1986, 1990, 1993
#	The Regents of the University of California.  All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. Neither the name of the University nor the names of its contributors
#    may be used to endorse or promote products derived from this software
#    without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
#
#	@(#)newvers.sh	8.1 (Berkeley) 4/20/94
# $FreeBSD$

TYPE="TmaxOS"
REVISION="3"
BRANCH="Enterprise Build 3.0"
if [ -n "${BRANCH_OVERRIDE}" ]; then
	BRANCH=${BRANCH_OVERRIDE}
fi
RELEASE="${REVISION}-${BRANCH}"
VERSION="${TYPE} ${RELEASE}"

if [ -z "${SYSDIR}" ]; then
    SYSDIR=$(dirname $0)/..
fi

if [ -n "${PARAMFILE}" ]; then
	RELDATE=$(awk '/__FreeBSD_version.*propagated to newvers/ {print $3}' \
		${PARAMFILE})
else
	RELDATE=$(awk '/__FreeBSD_version.*propagated to newvers/ {print $3}' \
		${SYSDIR}/sys/param.h)
fi

b=share/examples/etc/bsd-style-copyright
if [ -r "${SYSDIR}/../COPYRIGHT" ]; then
	year=$(sed -Ee '/^Copyright .* The FreeBSD Project/!d;s/^.*1992-([0-9]*) .*$/\1/g' ${SYSDIR}/../COPYRIGHT)
else
	year=$(date +%Y)
fi
# look for copyright template
for bsd_copyright in ../$b ../../$b ../../../$b /usr/src/$b /usr/$b
do
	if [ -r "$bsd_copyright" ]; then
		COPYRIGHT=`sed \
		    -e "s/\[year\]/1992-$year/" \
		    -e 's/\[your name here\]\.* /The FreeBSD Project./' \
		    -e 's/\[your name\]\.*/The FreeBSD Project./' \
		    -e '/\[id for your version control system, if any\]/d' \
		    $bsd_copyright` 
		break
	fi
done

# no copyright found, use a dummy
if [ -z "$COPYRIGHT" ]; then
	COPYRIGHT="/*-
 * Copyright (c) 1992-$year The FreeBSD Project.
 * All rights reserved.
 *
 */"
fi

# add newline
COPYRIGHT="$COPYRIGHT
"

# VARS_ONLY means no files should be generated, this is just being
# included.
if [ -n "$VARS_ONLY" ]; then
	return 0
fi

LC_ALL=C; export LC_ALL
if [ ! -r version ]
then
	echo 0 > version
fi

touch version
v=`cat version`
#u=${USER:-root}
u=""
#d=`pwd`
d=""
#h=${HOSTNAME:-`hostname`}
h=""
if [ -n "$SOURCE_DATE_EPOCH" ]; then
	if ! t=`date -r $SOURCE_DATE_EPOCH 2>/dev/null`; then
		echo "Invalid SOURCE_DATE_EPOCH" >&2
		exit 1
	fi
else
	t=`date`
fi
#i=`${MAKE:-make} -V KERN_IDENT`
i=""
compiler_v=$($(${MAKE:-make} -V CC) -v 2>&1 | grep -w 'version')

cat << EOF > vers.c
$COPYRIGHT
#define SCCSSTR "@(#)${VERSION} #${v}${svn}${git}${hg}${p4version}: ${t}"
#define VERSTR "${VERSION} #${v}${svn}${git}${hg}${p4version}: ${t}\\n    ${u}${h}${d}\\n"
#define RELSTR "${RELEASE}"

char sccs[sizeof(SCCSSTR) > 128 ? sizeof(SCCSSTR) : 128] = SCCSSTR;
char version[sizeof(VERSTR) > 256 ? sizeof(VERSTR) : 256] = VERSTR;
char compiler_version[] = "${compiler_v}";
char ostype[] = "${TYPE}";
char osrelease[sizeof(RELSTR) > 32 ? sizeof(RELSTR) : 32] = RELSTR;
int osreldate = ${RELDATE};
char kern_ident[] = "${i}";
EOF

echo $((v + 1)) > version
