#include <sys/cdefs.h>
__FBSDID("$FreeBSD$");

#include <linux/device.h>
#include <linux/acpi.h>
#include <drm/drmP.h>

#include <drm/drm_crtc_helper.h>

MODULE_DEPEND(nouveaukms, drmn, 1, 1, 1);
MODULE_DEPEND(nouveaukms, agp, 1, 1, 1);
MODULE_DEPEND(nouveaukms, linuxkpi, 1, 1, 1);
MODULE_DEPEND(nouveaukms, firmware, 1, 1, 1);
