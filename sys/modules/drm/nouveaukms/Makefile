#$FreeBSD$

.PATH:	${.CURDIR}/../../../dev/drm/nouveau

NOUVEAU=${.CURDIR}/../../../dev/drm/nouveau

KMOD	= nouveaukms
#nouveau
SRCS += \
	nouveau_freebsd.c\
	nouveau_drm.c\
	nouveau_connector.c\
	nouveau_acpi.c\
	nouveau_chan.c\
	${NOUVEAU}/nvkm/subdev/therm/temp.c\
	${NOUVEAU}/nvkm/core/option.c\
	nouveau_bo.c\
	${NOUVEAU}/nvkm/subdev/bios/shadowpci.c\
	${NOUVEAU}/nvkm/engine/fifo/base.c\
	nouveau_fence.c\
	nouveau_abi16.c\
	${nouveau_backlight}\
	nouveau_bios.c\
	${nouveau_debugfs}\
	nouveau_display.c\
	nouveau_dma.c\
	nouveau_dp.c\
	nouveau_fbcon.c\
	nouveau_gem.c\
	nouveau_hwmon.c\
	${nouveau_ioc}\
	nouveau_nvif.c\
	${nouveau_platform}\
	nouveau_prime.c\
	nouveau_sgdma.c\
	nouveau_ttm.c\
	nouveau_usif.c\
	nouveau_vga.c\
	nv04_fbcon.c\
	nv04_fence.c\
	nv10_fence.c\
	nv17_fence.c\
	nv50_display.c\
	nv50_fbcon.c\
	nv50_fence.c\
	nv84_fence.c\
	nvc0_fbcon.c\
	nvc0_fence.c\
#nouveau/dispnv04
SRCS += \
	${NOUVEAU}/dispnv04/arb.c\
	${NOUVEAU}/dispnv04/crtc.c\
	${NOUVEAU}/dispnv04/cursor.c\
	${NOUVEAU}/dispnv04/dac.c\
	${NOUVEAU}/dispnv04/dfp.c\
	${NOUVEAU}/dispnv04/disp.c\
	${NOUVEAU}/dispnv04/hw.c\
	${NOUVEAU}/dispnv04/overlay.c\
	${NOUVEAU}/dispnv04/tvmodesnv17.c\
	${NOUVEAU}/dispnv04/tvnv04.c\
	${NOUVEAU}/dispnv04/tvnv17.c

#nouveau/nvif
SRCS += \
	${NOUVEAU}/nvif/client.c\
	${NOUVEAU}/nvif/device.c\
	${NOUVEAU}/nvif/notify.c\
	${NOUVEAU}/nvif/object.c\
#nouveau/nvkm/core
SRCS += \
	${NOUVEAU}/nvkm/core/client.c\
	${NOUVEAU}/nvkm/core/engine.c\
	${NOUVEAU}/nvkm/core/enum.c\
	${NOUVEAU}/nvkm/core/event.c\
	${NOUVEAU}/nvkm/core/firmware.c\
	${NOUVEAU}/nvkm/core/gpuobj.c\
	${NOUVEAU}/nvkm/core/ioctl.c\
	${NOUVEAU}/nvkm/core/memory.c\
	${NOUVEAU}/nvkm/core/mm.c\
	${NOUVEAU}/nvkm/core/notify.c\
	${NOUVEAU}/nvkm/core/object.c\
	${NOUVEAU}/nvkm/core/oproxy.c\
	${NOUVEAU}/nvkm/core/ramht.c\
	${NOUVEAU}/nvkm/core/subdev.c\
#nouveau/nvkm/engine/bsp,ce,cipher,disp
SRCS += \
	${NOUVEAU}/nvkm/engine/bsp/g84.c\
	${NOUVEAU}/nvkm/engine/ce/gf100.c\
	${NOUVEAU}/nvkm/engine/ce/gk104.c\
	${NOUVEAU}/nvkm/engine/ce/gm107.c\
	${NOUVEAU}/nvkm/engine/ce/gm200.c\
	${NOUVEAU}/nvkm/engine/ce/gt215.c\
	${NOUVEAU}/nvkm/engine/cipher/g84.c\
	${NOUVEAU}/nvkm/engine/device/acpi.c\
	${NOUVEAU}/nvkm/engine/device/base.c\
	${NOUVEAU}/nvkm/engine/device/ctrl.c\
	${NOUVEAU}/nvkm/engine/device/pci.c\
	${NOUVEAU}/nvkm/engine/device/tegra.c\
	${NOUVEAU}/nvkm/engine/device/user.c\
	${NOUVEAU}/nvkm/engine/disp/baseg84.c\
	${NOUVEAU}/nvkm/engine/disp/basegf119.c\
	${NOUVEAU}/nvkm/engine/disp/basegk104.c\
	${NOUVEAU}/nvkm/engine/disp/basegk110.c\
	${NOUVEAU}/nvkm/engine/disp/basegt200.c\
	${NOUVEAU}/nvkm/engine/disp/basegt215.c\
	${NOUVEAU}/nvkm/engine/disp/changf119.c\
	${NOUVEAU}/nvkm/engine/disp/conn.c\
	${NOUVEAU}/nvkm/engine/disp/coreg84.c\
	${NOUVEAU}/nvkm/engine/disp/coreg94.c\
	${NOUVEAU}/nvkm/engine/disp/coregf119.c\
	${NOUVEAU}/nvkm/engine/disp/coregk104.c\
	${NOUVEAU}/nvkm/engine/disp/coregk110.c\
	${NOUVEAU}/nvkm/engine/disp/coregm107.c\
	${NOUVEAU}/nvkm/engine/disp/coregt200.c\
	${NOUVEAU}/nvkm/engine/disp/coregt215.c\
	${NOUVEAU}/nvkm/engine/disp/cursg84.c\
	${NOUVEAU}/nvkm/engine/disp/cursgf119.c\
	${NOUVEAU}/nvkm/engine/disp/cursgk104.c\
	${NOUVEAU}/nvkm/engine/disp/cursgt215.c\
	${NOUVEAU}/nvkm/engine/disp/dmacgf119.c\
	${NOUVEAU}/nvkm/engine/disp/dmacnv50.c\
	${NOUVEAU}/nvkm/engine/disp/g84.c\
	${NOUVEAU}/nvkm/engine/disp/g94.c\
	${NOUVEAU}/nvkm/engine/disp/gk104.c\
	${NOUVEAU}/nvkm/engine/disp/gk110.c\
	${NOUVEAU}/nvkm/engine/disp/gm107.c\
	${NOUVEAU}/nvkm/engine/disp/gt200.c\
	${NOUVEAU}/nvkm/engine/disp/gt215.c\
	${NOUVEAU}/nvkm/engine/disp/nv04.c\
	${NOUVEAU}/nvkm/engine/disp/oimmg84.c\
	${NOUVEAU}/nvkm/engine/disp/oimmgf119.c\
	${NOUVEAU}/nvkm/engine/disp/oimmgk104.c\
	${NOUVEAU}/nvkm/engine/disp/oimmgt215.c\
	${NOUVEAU}/nvkm/engine/disp/outp.c\
	${NOUVEAU}/nvkm/engine/disp/outpdp.c\
	${NOUVEAU}/nvkm/engine/disp/ovlyg84.c\
	${NOUVEAU}/nvkm/engine/disp/ovlygf119.c\
	${NOUVEAU}/nvkm/engine/disp/ovlygk104.c\
	${NOUVEAU}/nvkm/engine/disp/ovlygt200.c\
	${NOUVEAU}/nvkm/engine/disp/ovlygt215.c\
	${NOUVEAU}/nvkm/engine/disp/piocgf119.c\
	${NOUVEAU}/nvkm/engine/disp/piocnv50.c\
	${NOUVEAU}/nvkm/engine/disp/rootg84.c\
	${NOUVEAU}/nvkm/engine/disp/rootg94.c\
	${NOUVEAU}/nvkm/engine/disp/rootgk104.c\
	${NOUVEAU}/nvkm/engine/disp/rootgk110.c\
	${NOUVEAU}/nvkm/engine/disp/rootgm107.c\
	${NOUVEAU}/nvkm/engine/disp/rootgt200.c\
	${NOUVEAU}/nvkm/engine/disp/rootgt215.c\
	${NOUVEAU}/nvkm/engine/disp/sorgf119.c\
	${NOUVEAU}/nvkm/engine/disp/vga.c\
	${NOUVEAU}/nvkm/engine/disp/base.c\
	${NOUVEAU}/nvkm/engine/disp/basenv50.c\
	${NOUVEAU}/nvkm/engine/disp/coregm200.c\
	${NOUVEAU}/nvkm/engine/disp/corenv50.c\
	${NOUVEAU}/nvkm/engine/disp/cursnv50.c\
	${NOUVEAU}/nvkm/engine/disp/dacnv50.c\
	${NOUVEAU}/nvkm/engine/disp/gf119.c\
	${NOUVEAU}/nvkm/engine/disp/gm200.c\
	${NOUVEAU}/nvkm/engine/disp/hdagf119.c\
	${NOUVEAU}/nvkm/engine/disp/hdagt215.c\
	${NOUVEAU}/nvkm/engine/disp/hdmig84.c\
	${NOUVEAU}/nvkm/engine/disp/hdmigf119.c\
	${NOUVEAU}/nvkm/engine/disp/hdmigk104.c\
	${NOUVEAU}/nvkm/engine/disp/hdmigt215.c\
	${NOUVEAU}/nvkm/engine/disp/nv50.c\
	${NOUVEAU}/nvkm/engine/disp/oimmnv50.c\
	${NOUVEAU}/nvkm/engine/disp/ovlynv50.c\
	${NOUVEAU}/nvkm/engine/disp/piornv50.c\
	${NOUVEAU}/nvkm/engine/disp/rootgf119.c\
	${NOUVEAU}/nvkm/engine/disp/rootgm200.c\
	${NOUVEAU}/nvkm/engine/disp/rootnv04.c\
	${NOUVEAU}/nvkm/engine/disp/rootnv50.c\
	${NOUVEAU}/nvkm/engine/disp/sorgm200.c\
	${NOUVEAU}/nvkm/engine/disp/sornv50.c\
	${NOUVEAU}/nvkm/engine/disp/sorg94.c\
	${NOUVEAU}/nvkm/engine/disp/channv50.c\
	${NOUVEAU}/nvkm/engine/disp/dport.c\
#nouveau/nvkm/engine/dma,fifo,gr
SRCS += \
	${NOUVEAU}/nvkm/engine/gr/base.c\
	${NOUVEAU}/nvkm/engine/gr/g84.c\
	${NOUVEAU}/nvkm/engine/gr/gf104.c\
	${NOUVEAU}/nvkm/engine/gr/gf108.c\
	${NOUVEAU}/nvkm/engine/gr/gf110.c\
	${NOUVEAU}/nvkm/engine/gr/gf117.c\
	${NOUVEAU}/nvkm/engine/gr/gf119.c\
	${NOUVEAU}/nvkm/engine/gr/gk104.c\
	${NOUVEAU}/nvkm/engine/gr/gk110.c\
	${NOUVEAU}/nvkm/engine/gr/gk110b.c\
	${NOUVEAU}/nvkm/engine/gr/gk208.c\
	${NOUVEAU}/nvkm/engine/gr/gm107.c\
	${NOUVEAU}/nvkm/engine/gr/gt200.c\
	${NOUVEAU}/nvkm/engine/gr/gt215.c\
	${NOUVEAU}/nvkm/engine/gr/mcp79.c\
	${NOUVEAU}/nvkm/engine/gr/mcp89.c\
	${NOUVEAU}/nvkm/engine/gr/nv04.c\
	${NOUVEAU}/nvkm/engine/gr/nv10.c\
	${NOUVEAU}/nvkm/engine/gr/nv15.c\
	${NOUVEAU}/nvkm/engine/gr/nv17.c\
	${NOUVEAU}/nvkm/engine/gr/nv20.c\
	${NOUVEAU}/nvkm/engine/gr/nv25.c\
	${NOUVEAU}/nvkm/engine/gr/nv2a.c\
	${NOUVEAU}/nvkm/engine/gr/nv30.c\
	${NOUVEAU}/nvkm/engine/gr/nv34.c\
	${NOUVEAU}/nvkm/engine/gr/nv35.c\
	${NOUVEAU}/nvkm/engine/gr/nv40.c\
	${NOUVEAU}/nvkm/engine/gr/nv44.c\
	${NOUVEAU}/nvkm/engine/gr/nv50.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgk20a.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgm200.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgm20b.c\
	${NOUVEAU}/nvkm/engine/gr/gf100.c\
	${NOUVEAU}/nvkm/engine/gr/gk20a.c\
	${NOUVEAU}/nvkm/engine/gr/gm200.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgf104.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgf108.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgf110.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgf119.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgk104.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgk110.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgk110b.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgk208.c\
	${NOUVEAU}/nvkm/engine/gr/ctxnv40.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgf100.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgf117.c\
	${NOUVEAU}/nvkm/engine/gr/ctxgm107.c\
	${NOUVEAU}/nvkm/engine/gr/ctxnv50.c\
	${NOUVEAU}/nvkm/engine/dma/base.c\
	${NOUVEAU}/nvkm/engine/dma/gf100.c\
	${NOUVEAU}/nvkm/engine/dma/gf119.c\
	${NOUVEAU}/nvkm/engine/dma/nv04.c\
	${NOUVEAU}/nvkm/engine/dma/nv50.c\
	${NOUVEAU}/nvkm/engine/dma/user.c\
	${NOUVEAU}/nvkm/engine/dma/usergf119.c\
	${NOUVEAU}/nvkm/engine/dma/usernv04.c\
	${NOUVEAU}/nvkm/engine/dma/usergf100.c\
	${NOUVEAU}/nvkm/engine/dma/usernv50.c\
	${NOUVEAU}/nvkm/engine/fifo/g84.c\
	${NOUVEAU}/nvkm/engine/fifo/gk208.c\
	${NOUVEAU}/nvkm/engine/fifo/gk20a.c\
	${NOUVEAU}/nvkm/engine/fifo/nv04.c\
	${NOUVEAU}/nvkm/engine/fifo/nv10.c\
	${NOUVEAU}/nvkm/engine/fifo/nv17.c\
	${NOUVEAU}/nvkm/engine/fifo/nv40.c\
	${NOUVEAU}/nvkm/engine/fifo/nv50.c\
	${NOUVEAU}/nvkm/engine/fifo/dmanv04.c\
	${NOUVEAU}/nvkm/engine/fifo/dmanv10.c\
	${NOUVEAU}/nvkm/engine/fifo/dmanv17.c\
	${NOUVEAU}/nvkm/engine/fifo/dmanv40.c\
	${NOUVEAU}/nvkm/engine/fifo/gf100.c\
	${NOUVEAU}/nvkm/engine/fifo/gk104.c\
	${NOUVEAU}/nvkm/engine/fifo/gk110.c\
	${NOUVEAU}/nvkm/engine/fifo/gm107.c\
	${NOUVEAU}/nvkm/engine/fifo/gm200.c\
	${NOUVEAU}/nvkm/engine/fifo/gpfifogk110.c\
	${NOUVEAU}/nvkm/engine/fifo/gpfifogm200.c\
	${NOUVEAU}/nvkm/engine/fifo/chan.c\
	${NOUVEAU}/nvkm/engine/fifo/channv50.c\
	${NOUVEAU}/nvkm/engine/fifo/chang84.c\
	${NOUVEAU}/nvkm/engine/fifo/dmag84.c\
	${NOUVEAU}/nvkm/engine/fifo/dmanv50.c\
	${NOUVEAU}/nvkm/engine/fifo/gpfifog84.c\
	${NOUVEAU}/nvkm/engine/fifo/gpfifogf100.c\
	${NOUVEAU}/nvkm/engine/fifo/gpfifogk104.c\
	${NOUVEAU}/nvkm/engine/fifo/gpfifonv50.c\
#nouveau/nvkm/engine/vp,sw,sec,pm,msvld,msppp,mspdec,mpeg
SRCS +=  \
	${NOUVEAU}/nvkm/engine/falcon.c\
	${NOUVEAU}/nvkm/engine/xtensa.c\
	${NOUVEAU}/nvkm/engine/vp/g84.c\
	${NOUVEAU}/nvkm/engine/sw/base.c\
	${NOUVEAU}/nvkm/engine/sw/chan.c\
	${NOUVEAU}/nvkm/engine/sw/gf100.c\
	${NOUVEAU}/nvkm/engine/sw/nv04.c\
	${NOUVEAU}/nvkm/engine/sw/nv10.c\
	${NOUVEAU}/nvkm/engine/sw/nv50.c\
	${NOUVEAU}/nvkm/engine/sw/nvsw.c\
	${NOUVEAU}/nvkm/engine/sec/g98.c\
	${NOUVEAU}/nvkm/engine/pm/g84.c\
	${NOUVEAU}/nvkm/engine/pm/gf100.c\
	${NOUVEAU}/nvkm/engine/pm/gf108.c\
	${NOUVEAU}/nvkm/engine/pm/gf117.c\
	${NOUVEAU}/nvkm/engine/pm/gk104.c\
	${NOUVEAU}/nvkm/engine/pm/gt200.c\
	${NOUVEAU}/nvkm/engine/pm/gt215.c\
	${NOUVEAU}/nvkm/engine/pm/nv50.c\
	${NOUVEAU}/nvkm/engine/pm/nv40.c\
	${NOUVEAU}/nvkm/engine/pm/base.c\
	${NOUVEAU}/nvkm/engine/msvld/base.c\
	${NOUVEAU}/nvkm/engine/msvld/g98.c\
	${NOUVEAU}/nvkm/engine/msvld/gf100.c\
	${NOUVEAU}/nvkm/engine/msvld/gk104.c\
	${NOUVEAU}/nvkm/engine/msvld/gt215.c\
	${NOUVEAU}/nvkm/engine/msvld/mcp89.c\
	${NOUVEAU}/nvkm/engine/msppp/base.c\
	${NOUVEAU}/nvkm/engine/msppp/g98.c\
	${NOUVEAU}/nvkm/engine/msppp/gf100.c\
	${NOUVEAU}/nvkm/engine/msppp/gt215.c\
	${NOUVEAU}/nvkm/engine/mspdec/base.c\
	${NOUVEAU}/nvkm/engine/mspdec/g98.c\
	${NOUVEAU}/nvkm/engine/mspdec/gf100.c\
	${NOUVEAU}/nvkm/engine/mspdec/gk104.c\
	${NOUVEAU}/nvkm/engine/mspdec/gt215.c\
	${NOUVEAU}/nvkm/engine/mpeg/g84.c\
	${NOUVEAU}/nvkm/engine/mpeg/nv31.c\
	${NOUVEAU}/nvkm/engine/mpeg/nv40.c\
	${NOUVEAU}/nvkm/engine/mpeg/nv44.c\
	${NOUVEAU}/nvkm/engine/mpeg/nv50.c\
#nouveau/nvkm/subdev/bar,bios
SRCS += \
	${NOUVEAU}/nvkm/subdev/bar/base.c\
	${NOUVEAU}/nvkm/subdev/bar/g84.c\
	${NOUVEAU}/nvkm/subdev/bar/gk20a.c\
	${NOUVEAU}/nvkm/subdev/bar/nv50.c\
	${NOUVEAU}/nvkm/subdev/bar/gf100.c\
	${NOUVEAU}/nvkm/subdev/bios/M0203.c\
	${NOUVEAU}/nvkm/subdev/bios/M0205.c\
	${NOUVEAU}/nvkm/subdev/bios/M0209.c\
	${NOUVEAU}/nvkm/subdev/bios/P0260.c\
	${NOUVEAU}/nvkm/subdev/bios/base.c\
	${NOUVEAU}/nvkm/subdev/bios/bit.c\
	${NOUVEAU}/nvkm/subdev/bios/boost.c\
	${NOUVEAU}/nvkm/subdev/bios/conn.c\
	${NOUVEAU}/nvkm/subdev/bios/cstep.c\
	${NOUVEAU}/nvkm/subdev/bios/disp.c\
	${NOUVEAU}/nvkm/subdev/bios/dp.c\
	${NOUVEAU}/nvkm/subdev/bios/fan.c\
	${NOUVEAU}/nvkm/subdev/bios/gpio.c\
	${NOUVEAU}/nvkm/subdev/bios/i2c.c\
	${NOUVEAU}/nvkm/subdev/bios/image.c\
	${NOUVEAU}/nvkm/subdev/bios/mxm.c\
	${NOUVEAU}/nvkm/subdev/bios/npde.c\
	${NOUVEAU}/nvkm/subdev/bios/pcir.c\
	${NOUVEAU}/nvkm/subdev/bios/pll.c\
	${NOUVEAU}/nvkm/subdev/bios/pmu.c\
	${NOUVEAU}/nvkm/subdev/bios/ramcfg.c\
	${NOUVEAU}/nvkm/subdev/bios/rammap.c\
	${NOUVEAU}/nvkm/subdev/bios/shadowacpi.c\
	${NOUVEAU}/nvkm/subdev/bios/shadowof.c\
	${NOUVEAU}/nvkm/subdev/bios/shadowramin.c\
	${NOUVEAU}/nvkm/subdev/bios/shadowrom.c\
	${NOUVEAU}/nvkm/subdev/bios/therm.c\
	${NOUVEAU}/nvkm/subdev/bios/timing.c\
	${NOUVEAU}/nvkm/subdev/bios/vmap.c\
	${NOUVEAU}/nvkm/subdev/bios/volt.c\
	${NOUVEAU}/nvkm/subdev/bios/xpio.c\
	${NOUVEAU}/nvkm/subdev/bios/dcb.c\
	${NOUVEAU}/nvkm/subdev/bios/extdev.c\
	${NOUVEAU}/nvkm/subdev/bios/iccsense.c\
	${NOUVEAU}/nvkm/subdev/bios/init.c\
	${NOUVEAU}/nvkm/subdev/bios/perf.c\
	${NOUVEAU}/nvkm/subdev/bios/shadow.c\
#nouveau/nvkm/subdev/bus,clk,devinit,fb
SRCS += \
	${NOUVEAU}/nvkm/subdev/devinit/base.c\
	${NOUVEAU}/nvkm/subdev/devinit/g84.c\
	${NOUVEAU}/nvkm/subdev/devinit/g98.c\
	${NOUVEAU}/nvkm/subdev/devinit/gt215.c\
	${NOUVEAU}/nvkm/subdev/devinit/mcp89.c\
	${NOUVEAU}/nvkm/subdev/devinit/nv04.c\
	${NOUVEAU}/nvkm/subdev/devinit/nv05.c\
	${NOUVEAU}/nvkm/subdev/devinit/nv10.c\
	${NOUVEAU}/nvkm/subdev/devinit/nv1a.c\
	${NOUVEAU}/nvkm/subdev/devinit/nv20.c\
	${NOUVEAU}/nvkm/subdev/devinit/gf100.c\
	${NOUVEAU}/nvkm/subdev/devinit/gm107.c\
	${NOUVEAU}/nvkm/subdev/devinit/gm200.c\
	${NOUVEAU}/nvkm/subdev/devinit/nv50.c\
	${NOUVEAU}/nvkm/subdev/fb/base.c\
	${NOUVEAU}/nvkm/subdev/fb/g84.c\
	${NOUVEAU}/nvkm/subdev/fb/gddr3.c\
	${NOUVEAU}/nvkm/subdev/fb/gddr5.c\
	${NOUVEAU}/nvkm/subdev/fb/gf100.c\
	${NOUVEAU}/nvkm/subdev/fb/gk104.c\
	${NOUVEAU}/nvkm/subdev/fb/gk20a.c\
	${NOUVEAU}/nvkm/subdev/fb/gm107.c\
	${NOUVEAU}/nvkm/subdev/fb/gt215.c\
	${NOUVEAU}/nvkm/subdev/fb/mcp77.c\
	${NOUVEAU}/nvkm/subdev/fb/mcp89.c\
	${NOUVEAU}/nvkm/subdev/fb/nv04.c\
	${NOUVEAU}/nvkm/subdev/fb/nv10.c\
	${NOUVEAU}/nvkm/subdev/fb/nv1a.c\
	${NOUVEAU}/nvkm/subdev/fb/nv20.c\
	${NOUVEAU}/nvkm/subdev/fb/nv25.c\
	${NOUVEAU}/nvkm/subdev/fb/nv30.c\
	${NOUVEAU}/nvkm/subdev/fb/nv35.c\
	${NOUVEAU}/nvkm/subdev/fb/nv36.c\
	${NOUVEAU}/nvkm/subdev/fb/nv40.c\
	${NOUVEAU}/nvkm/subdev/fb/nv41.c\
	${NOUVEAU}/nvkm/subdev/fb/nv44.c\
	${NOUVEAU}/nvkm/subdev/fb/nv46.c\
	${NOUVEAU}/nvkm/subdev/fb/nv47.c\
	${NOUVEAU}/nvkm/subdev/fb/nv49.c\
	${NOUVEAU}/nvkm/subdev/fb/nv4e.c\
	${NOUVEAU}/nvkm/subdev/fb/ram.c\
	${NOUVEAU}/nvkm/subdev/fb/ramgm107.c\
	${NOUVEAU}/nvkm/subdev/fb/rammcp77.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv04.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv10.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv1a.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv20.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv40.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv41.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv44.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv49.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv4e.c\
	${NOUVEAU}/nvkm/subdev/fb/ramnv50.c\
	${NOUVEAU}/nvkm/subdev/fb/nv50.c\
	${NOUVEAU}/nvkm/subdev/fb/ramgf100.c\
	${NOUVEAU}/nvkm/subdev/fb/ramgt215.c\
	${NOUVEAU}/nvkm/subdev/fb/sddr2.c\
	${NOUVEAU}/nvkm/subdev/fb/sddr3.c\
	${NOUVEAU}/nvkm/subdev/fb/ramgk104.c\
	${NOUVEAU}/nvkm/subdev/bus/base.c\
	${NOUVEAU}/nvkm/subdev/bus/g94.c\
	${NOUVEAU}/nvkm/subdev/bus/gf100.c\
	${NOUVEAU}/nvkm/subdev/bus/hwsq.c\
	${NOUVEAU}/nvkm/subdev/bus/nv04.c\
	${NOUVEAU}/nvkm/subdev/bus/nv31.c\
	${NOUVEAU}/nvkm/subdev/bus/nv50.c\
	${NOUVEAU}/nvkm/subdev/clk/g84.c\
	${NOUVEAU}/nvkm/subdev/clk/mcp77.c\
	${NOUVEAU}/nvkm/subdev/clk/nv04.c\
	${NOUVEAU}/nvkm/subdev/clk/nv40.c\
	${NOUVEAU}/nvkm/subdev/clk/nv50.c\
	${NOUVEAU}/nvkm/subdev/clk/pllgt215.c\
	${NOUVEAU}/nvkm/subdev/clk/pllnv04.c\
	${NOUVEAU}/nvkm/subdev/clk/base.c\
	${NOUVEAU}/nvkm/subdev/clk/gf100.c\
	${NOUVEAU}/nvkm/subdev/clk/gk104.c\
	${NOUVEAU}/nvkm/subdev/clk/gt215.c\
#nouveau/nvkm/subdev/fuse,gpio,i2c,ibus,instmem,ltc,mc,mmu,mxm
SRCS += \
	${NOUVEAU}/nvkm/subdev/mxm/base.c\
	${NOUVEAU}/nvkm/subdev/mxm/mxms.c\
	${NOUVEAU}/nvkm/subdev/mxm/nv50.c\
	${NOUVEAU}/nvkm/subdev/ltc/base.c\
	${NOUVEAU}/nvkm/subdev/ltc/gk104.c\
	${NOUVEAU}/nvkm/subdev/ltc/gf100.c\
	${NOUVEAU}/nvkm/subdev/ltc/gm107.c\
	${NOUVEAU}/nvkm/subdev/ltc/gm200.c\
	${NOUVEAU}/nvkm/subdev/mc/base.c\
	${NOUVEAU}/nvkm/subdev/mc/g98.c\
	${NOUVEAU}/nvkm/subdev/mc/gf100.c\
	${NOUVEAU}/nvkm/subdev/mc/gk20a.c\
	${NOUVEAU}/nvkm/subdev/mc/nv04.c\
	${NOUVEAU}/nvkm/subdev/mc/nv44.c\
	${NOUVEAU}/nvkm/subdev/mc/nv50.c\
	${NOUVEAU}/nvkm/subdev/mmu/nv04.c\
	${NOUVEAU}/nvkm/subdev/mmu/nv41.c\
	${NOUVEAU}/nvkm/subdev/mmu/nv44.c\
	${NOUVEAU}/nvkm/subdev/mmu/nv50.c\
	${NOUVEAU}/nvkm/subdev/mmu/gf100.c\
	${NOUVEAU}/nvkm/subdev/mmu/base.c\
	${NOUVEAU}/nvkm/subdev/fuse/base.c\
	${NOUVEAU}/nvkm/subdev/fuse/gf100.c\
	${NOUVEAU}/nvkm/subdev/fuse/gm107.c\
	${NOUVEAU}/nvkm/subdev/fuse/nv50.c\
	${NOUVEAU}/nvkm/subdev/gpio/base.c\
	${NOUVEAU}/nvkm/subdev/gpio/g94.c\
	${NOUVEAU}/nvkm/subdev/gpio/gf119.c\
	${NOUVEAU}/nvkm/subdev/gpio/nv10.c\
	${NOUVEAU}/nvkm/subdev/gpio/nv50.c\
	${NOUVEAU}/nvkm/subdev/gpio/gk104.c\
	${NOUVEAU}/nvkm/subdev/i2c/anx9805.c\
	${NOUVEAU}/nvkm/subdev/i2c/aux.c\
	${NOUVEAU}/nvkm/subdev/i2c/auxg94.c\
	${NOUVEAU}/nvkm/subdev/i2c/base.c\
	${NOUVEAU}/nvkm/subdev/i2c/bit.c\
	${NOUVEAU}/nvkm/subdev/i2c/bus.c\
	${NOUVEAU}/nvkm/subdev/i2c/busgf119.c\
	${NOUVEAU}/nvkm/subdev/i2c/busnv04.c\
	${NOUVEAU}/nvkm/subdev/i2c/busnv4e.c\
	${NOUVEAU}/nvkm/subdev/i2c/busnv50.c\
	${NOUVEAU}/nvkm/subdev/i2c/g94.c\
	${NOUVEAU}/nvkm/subdev/i2c/gf117.c\
	${NOUVEAU}/nvkm/subdev/i2c/gf119.c\
	${NOUVEAU}/nvkm/subdev/i2c/gk104.c\
	${NOUVEAU}/nvkm/subdev/i2c/nv04.c\
	${NOUVEAU}/nvkm/subdev/i2c/nv4e.c\
	${NOUVEAU}/nvkm/subdev/i2c/nv50.c\
	${NOUVEAU}/nvkm/subdev/i2c/pad.c\
	${NOUVEAU}/nvkm/subdev/i2c/padg94.c\
	${NOUVEAU}/nvkm/subdev/i2c/padgf119.c\
	${NOUVEAU}/nvkm/subdev/i2c/padnv04.c\
	${NOUVEAU}/nvkm/subdev/i2c/padnv4e.c\
	${NOUVEAU}/nvkm/subdev/i2c/padnv50.c\
	${NOUVEAU}/nvkm/subdev/i2c/auxgm200.c\
	${NOUVEAU}/nvkm/subdev/i2c/gm200.c\
	${NOUVEAU}/nvkm/subdev/i2c/padgm200.c\
	${NOUVEAU}/nvkm/subdev/ibus/gf100.c\
	${NOUVEAU}/nvkm/subdev/ibus/gf117.c\
	${NOUVEAU}/nvkm/subdev/ibus/gk20a.c\
	${NOUVEAU}/nvkm/subdev/ibus/gk104.c\
	${NOUVEAU}/nvkm/subdev/ibus/gm200.c\
	${NOUVEAU}/nvkm/subdev/instmem/base.c\
	${NOUVEAU}/nvkm/subdev/instmem/nv04.c\
	${NOUVEAU}/nvkm/subdev/instmem/nv40.c\
	${NOUVEAU}/nvkm/subdev/instmem/nv50.c\
#nouveau/nvkm/subdev/pci,pmu,therm,timer,volt,iccsense,secboot
SRCS += \
	${NOUVEAU}/nvkm/subdev/iccsense/base.c\
	${NOUVEAU}/nvkm/subdev/iccsense/gf100.c\
	${NOUVEAU}/nvkm/subdev/secboot/base.c\
	${NOUVEAU}/nvkm/subdev/secboot/gm200.c\
	${NOUVEAU}/nvkm/subdev/pci/agp.c\
	${NOUVEAU}/nvkm/subdev/pci/nv04.c\
	${NOUVEAU}/nvkm/subdev/pci/nv40.c\
	${NOUVEAU}/nvkm/subdev/pci/nv46.c\
	${NOUVEAU}/nvkm/subdev/pci/nv4c.c\
	${NOUVEAU}/nvkm/subdev/pci/base.c\
	${NOUVEAU}/nvkm/subdev/pci/g84.c\
	${NOUVEAU}/nvkm/subdev/pci/g94.c\
	${NOUVEAU}/nvkm/subdev/pci/gf100.c\
	${NOUVEAU}/nvkm/subdev/pci/gf106.c\
	${NOUVEAU}/nvkm/subdev/pci/gk104.c\
	${NOUVEAU}/nvkm/subdev/pci/pcie.c\
	${NOUVEAU}/nvkm/subdev/pmu/base.c\
	${NOUVEAU}/nvkm/subdev/pmu/gf100.c\
	${NOUVEAU}/nvkm/subdev/pmu/gf119.c\
	${NOUVEAU}/nvkm/subdev/pmu/gk104.c\
	${NOUVEAU}/nvkm/subdev/pmu/gk110.c\
	${NOUVEAU}/nvkm/subdev/pmu/gk208.c\
	${NOUVEAU}/nvkm/subdev/pmu/gk20a.c\
	${NOUVEAU}/nvkm/subdev/pmu/gm107.c\
	${NOUVEAU}/nvkm/subdev/pmu/gt215.c\
	${NOUVEAU}/nvkm/subdev/pmu/memx.c\
	${NOUVEAU}/nvkm/subdev/therm/base.c\
	${NOUVEAU}/nvkm/subdev/therm/fan.c\
	${NOUVEAU}/nvkm/subdev/therm/fannil.c\
	${NOUVEAU}/nvkm/subdev/therm/fanpwm.c\
	${NOUVEAU}/nvkm/subdev/therm/fantog.c\
	${NOUVEAU}/nvkm/subdev/therm/g84.c\
	${NOUVEAU}/nvkm/subdev/therm/gf119.c\
	${NOUVEAU}/nvkm/subdev/therm/gm107.c\
	${NOUVEAU}/nvkm/subdev/therm/gt215.c\
	${NOUVEAU}/nvkm/subdev/therm/nv50.c\
	${NOUVEAU}/nvkm/subdev/therm/nv40.c\
	${NOUVEAU}/nvkm/subdev/therm/ic.c\
	${NOUVEAU}/nvkm/subdev/timer/base.c\
	${NOUVEAU}/nvkm/subdev/timer/gk20a.c\
	${NOUVEAU}/nvkm/subdev/timer/nv40.c\
	${NOUVEAU}/nvkm/subdev/timer/nv41.c\
	${NOUVEAU}/nvkm/subdev/timer/nv04.c\
	${NOUVEAU}/nvkm/subdev/volt/base.c\
	${NOUVEAU}/nvkm/subdev/volt/nv40.c\
	${NOUVEAU}/nvkm/subdev/volt/gk104.c\
	${NOUVEAU}/nvkm/subdev/volt/gpio.c\
#gk20a.c 관련
#SRCS += \
	${NOUVEAU}/nvkm/subdev/instmem/gk20a.c\
	${NOUVEAU}/nvkm/subdev/volt/gk20a.c\
	${NOUVEAU}/nvkm/subdev/clk/gk20a.c\
#gm20b.c 관련
#SRCS += \
	${NOUVEAU}/nvkm/subdev/clk/gm20b.c\
	${NOUVEAU}/nvkm/engine/gr/gm20b.c\
	${NOUVEAU}/nvkm/subdev/volt/gm20b.c\
	${NOUVEAU}/nvkm/subdev/secboot/gm20b.c\
	${NOUVEAU}/nvkm/engine/fifo/gm20b.c\

CFLAGS+= -I${.CURDIR}/../../../compat/linuxkpi/common/include
CFLAGS+= -I${.CURDIR}/../../../compat/linuxkpi/common/include/uapi
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/include
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/dispnv04
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/include/nvif
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/include/nvkm
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/include/nvkm/engine
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/include/nvkm/core
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/include/nvkm/subdev
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/nvkm
CFLAGS+= -I${.CURDIR}/../../../dev/drm/nouveau/nvif
CFLAGS+= -I${.CURDIR}/../../../contrib/ck/include
CFLAGS+= -I${.CURDIR}/../../../dev/drm


CFLAGS+= '-DKBUILD_MODNAME="${KMOD}"'
#CFLAGS += -O0

CFLAGS+= -include autoconf.h
MKDEP+= -include autoconf.h

.if ${MACHINE_CPUARCH} == "amd64"
nouveau_ioc32 = nouveau_ioc32.c
.endif

.ifdef CONFIG_COMPAT
nouveau_ioc32 = nouveau_ioc32.c
.endif

.ifdef CONFIG_DRM_NOUVEAU_BACKLIGHT
nouveau_backlight =  nouveau_backlight.c
.endif

.ifdef CONFIG_DEBUG_FS
nouveau_debugfs =  nouveau_debugfs.c
.endif

.ifdef CONFIG_NOUVEAU_PLATFORM_DRIVER
nouveau_platform = nouveau_platform.c
.endif


SRCS	+=								\
	opt_acpi.h							\
	opt_compat.h							\
	opt_drm.h							\
	opt_syscons.h							\
	acpi_if.h							\
	bus_if.h							\
	fb_if.h								\
	device_if.h							\
	pci_if.h							\
	vnode_if.h

.include <bsd.kmod.mk>

CWARNFLAGS += -Wno-pointer-arith
CWARNFLAGS.nouveau_abi16.c=	-Wno-unused-variable
#CWARNFLAGS.nouveau_bo.c=	-Wno-incompatible-pointer-types
CWARNFLAGS.nouveau_chan.c=	-Wno-unused-variable
#CWARNFLAGS.nouveau_display.c=	-Wno-missing-prototypes
#CWARNFLAGS.nouveau_drm.c=	-Wno-unused-variable
CWARNFLAGS.subdev.c=	-Wno-unused-variable
CWARNFLAGS.nv04.c=	-Wno-unused-variable
CWARNFLAGS.gf100.c=	-Wno-unused-variable -Wno-format -Wno-missing-prototypes
CWARNFLAGS.base.c=	-Wno-unused-variable -Wno-format -Wno-missing-prototypes -Wno-cast-qual
CWARNFLAGS.nv50_display.c= -Wno-gnu-variable-sized-type-not-at-end
CWARNFLAGS.notify.c= -Wno-gnu-variable-sized-type-not-at-end -Wno-cast-qual
CWARNFLAGS.object.c= -Wno-gnu-variable-sized-type-not-at-end -Wno-format
CWARNFLAGS.client.c= -Wno-gnu-variable-sized-type-not-at-end -Wno-format
CWARNFLAGS.temp.c = -Wno-tautological-compare
CWARNFLAGS.nouveau_display.c = -Wno-missing-prototypes
CWARNFLAGS.nv04_fbcon.c = -Wno-cast-qual
CWARNFLAGS.nv10_fence.c = -Wno-missing-prototypes
CWARNFLAGS.nv50_fbcon.c = -Wno-cast-qual
CWARNFLAGS.nvc0_fbcon.c = -Wno-cast-qual
CWARNFLAGS.engine.c = -Wno-format
CWARNFLAGS.ioctl.c = -Wno-format
CWARNFLAGS.subdev.c = -Wno-format -Wno-unused-variable
CWARNFLAGS.gt215.c = -Wno-format -Wno-missing-prototypes
CWARNFLAGS.g84.c = -Wno-format
CWARNFLAGS.user.c = -Wno-format -Wno-missing-prototypes
CWARNFLAGS.basenv50.c = -Wno-format
CWARNFLAGS.corenv50.c = -Wno-format
CWARNFLAGS.ovlynv50.c = -Wno-format
CWARNFLAGS.rootnv50.c = -Wno-missing-prototypes
CWARNFLAGS.sorg94.c = -Wno-missing-prototypes
CWARNFLAGS.channv50.c = -Wno-missing-prototypes
CWARNFLAGS.gm107.c = -Wno-missing-prototypes
CWARNFLAGS.nv50.c = -Wno-format
CWARNFLAGS.ctxgf117.c = -Wno-missing-prototypes
CWARNFLAGS.ctxgm107.c = -Wno-missing-prototypes
CWARNFLAGS.dmanv04.c = -Wno-format
CWARNFLAGS.dmanv10.c = -Wno-format
CWARNFLAGS.dmanv17.c = -Wno-format
CWARNFLAGS.dmanv40.c = -Wno-format
CWARNFLAGS.gk104.c = -Wno-format -Wno-missing-prototypes
CWARNFLAGS.chang84.c = -Wno-missing-prototypes
CWARNFLAGS.dmag84.c = -Wno-format
CWARNFLAGS.dmanv50.c = -Wno-format
CWARNFLAGS.gpfifog84.c = -Wno-format
CWARNFLAGS.gpfifogf100.c = -Wno-format
CWARNFLAGS.gpfifogk104.c = -Wno-format
CWARNFLAGS.gpfifonv50.c = -Wno-format
CWARNFLAGS.xtensa.c = -Wno-cast-qual
CWARNFLAGS.g98.c = -Wno-format
CWARNFLAGS.fan.c = -Wno-missing-prototypes
CWARNFLAGS.shadow.c = -Wno-cast-qual
CWARNFLAGS.ramgt215.c = -Wno-missing-prototypes
CWARNFLAGS.gm200.c = -Wno-missing-prototypes -Wno-cast-qual


CFLAGS += -Wno-sometimes-uninitialized
