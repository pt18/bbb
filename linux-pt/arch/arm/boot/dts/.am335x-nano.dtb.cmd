cmd_arch/arm/boot/dts/am335x-nano.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnu-gcc -E -Wp,-MD,arch/arm/boot/dts/.am335x-nano.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am335x-nano.dtb.dts.tmp arch/arm/boot/dts/am335x-nano.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/am335x-nano.dtb -b 0 -i arch/arm/boot/dts/ -@ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.am335x-nano.dtb.d.dtc.tmp arch/arm/boot/dts/.am335x-nano.dtb.dts.tmp ; cat arch/arm/boot/dts/.am335x-nano.dtb.d.pre.tmp arch/arm/boot/dts/.am335x-nano.dtb.d.dtc.tmp > arch/arm/boot/dts/.am335x-nano.dtb.d

source_arch/arm/boot/dts/am335x-nano.dtb := arch/arm/boot/dts/am335x-nano.dts

deps_arch/arm/boot/dts/am335x-nano.dtb := \
  arch/arm/boot/dts/am33xx.dtsi \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/am33xx.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/tps65217.dtsi \
  arch/arm/boot/dts/am33xx-clocks.dtsi \

arch/arm/boot/dts/am335x-nano.dtb: $(deps_arch/arm/boot/dts/am335x-nano.dtb)

$(deps_arch/arm/boot/dts/am335x-nano.dtb):
