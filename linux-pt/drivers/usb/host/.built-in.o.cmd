cmd_drivers/usb/host/built-in.o :=  arm-linux-gnu-ld -EL    -r -o drivers/usb/host/built-in.o drivers/usb/host/pci-quirks.o drivers/usb/host/ehci-hcd.o drivers/usb/host/ehci-pci.o drivers/usb/host/ehci-platform.o drivers/usb/host/ehci-omap.o drivers/usb/host/xhci-hcd.o drivers/usb/host/xhci-pci.o drivers/usb/host/xhci-plat-hcd.o 
