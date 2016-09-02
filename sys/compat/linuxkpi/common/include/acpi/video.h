#ifndef _LINUX_ACPI_VIDEO_H_
#define _LINUX_ACPI_VIDEO_H_

#include <sys/systm.h>

#define ACPI_VIDEO_CLASS   "video"

#ifndef __TOS_ADD
#define ACPI_VIDEO_DISPLAY_LCD 4
#endif

enum acpi_backlight_type {
        acpi_backlight_undef = -1,
        acpi_backlight_none = 0,
        acpi_backlight_video,
        acpi_backlight_vendor,
        acpi_backlight_native,
};

enum acpi_backlight_type acpi_video_get_backlight_type(void);

#ifndef __TOS_ADD

#if IS_ENABLED(CONFIG_ACPI_VIDEO)
extern int acpi_video_get_edid(struct acpi_device *device, int type, int device_id, void **edid);
#else
static inline int acpi_video_get_edid(struct acpi_device *device, int type, int device_id, void **edid)
{
    return -ENODEV;
}
#endif /* CONFIG_ACPI_VIDEO */


#endif


#endif
