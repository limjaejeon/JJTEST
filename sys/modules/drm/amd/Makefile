# $FreeBSD$

SYSDIR?=${.CURDIR}/../../..
.include "${SYSDIR}/conf/kern.opts.mk"

.if ${MACHINE_CPUARCH} == "amd64" || ${MACHINE_CPUARCH} == "i386"
_amdgpu=	amdgpu
_amdkfd=	amdkfd
.endif

SUBDIR = \
        ${_amdgpu} \
	${_amdkfd} \

.include <bsd.subdir.mk>
