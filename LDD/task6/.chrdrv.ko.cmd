cmd_/home/km/Mirafra_tech/LDD/task6/chrdrv.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -z noexecstack   --build-id  -T ./scripts/module-common.lds -o /home/km/Mirafra_tech/LDD/task6/chrdrv.ko /home/km/Mirafra_tech/LDD/task6/chrdrv.o /home/km/Mirafra_tech/LDD/task6/chrdrv.mod.o;  true