BOARD=f4
PROJECT_DIR=testTIMencoder
PROJECT_NAME=testTIMencoder
DOC_DIR= /home/$(USER)/STM32Cube/

rouge = \033[0;31m
vert = \033[0;32m
bleu = \033[0;34m
fin = \033[0m
vert_gras = \033[0;1;32m
fin_gras = \033[0;21m

ORI=$(CURDIR)

#ToDo : in addSource, exclude file which are not stm32$(BOARD) among stm32xx cpu

c:
	make comp

f:
	sudo make flash

d:
	make debug

cf:
	make comp
	sudo make flash

cfd:
	make comp
	make flash
	make debug

addSource:
	@cat $(PROJECT_DIR)/Makefile | sed -e '/^Src/ d' -e '/^ Src/ d' -e '/^\\/ d' > $(PROJECT_DIR)/tmpMakefile; 
	mv $(PROJECT_DIR)/tmpMakefile $(PROJECT_DIR)/Makefile;
	sed -i '/C_SOURCES =/a$(patsubst $(PROJECT_DIR)/Src/%.c,Src/%.c \\\n, $(wildcard $(PROJECT_DIR)/Src/*.c))\\' $(PROJECT_DIR)/Makefile

comp:
	@echo -e "${vert_gras}+--------------------[ Compilation ]--------------------+ ${fin}"
	#make addSource
	cd $(PROJECT_DIR);\
	make all
	cd $(ORI);\

	@echo -e "${vert_gras}+----------------[ Compilation terminée ]---------------+ ${fin}"

flash:
	@echo -e "${vert_gras}+---------------------[ Transfert ]---------------------+ ${fin}"
	openocd -f openocd/st_nucleo_$(BOARD).cfg -c "program $(PROJECT_DIR)/build/$(PROJECT_NAME).bin exit 0x08000000 reset"
	@echo -e "${vert_gras}+----------------[ Transfert terminé ]------------------+ ${fin}"

sf:
	@echo -e "${vert_gras}+---------------------[ Transfert ]---------------------+ ${fin}"
	st-flash write $(PROJECT_DIR)/build/$(PROJECT_NAME).bin 0x08000000
	@echo -e "${vert_gras}+----------------[ Transfert terminé ]------------------+ ${fin}"

debug:
	@echo -e "${vert_gras}+-----------------------[ Debug ]-----------------------+ ${fin}"
	arm-none-eabi-gdb $(PROJECT_DIR)/build/$(PROJECT_NAME).elf --command=openocd/attach_$(BOARD).gdb
	@echo -e "${vert_gras}+-------------------[ Debug terminé ]-------------------+ ${fin}"

flash_file:
	@echo -e "${vert_gras}+-------------[ Transfert du fichier local]-------------+ ${fin}"
	openocd -f openocd/st_nucleo_$(BOARD).cfg -c "program local.bin exit 0x08000000 reset"
	@echo -e "${vert_gras}+--------[ Transfert du fichier local terminé ]---------+ ${fin}"

doc:
	qpdfview $(DOC_DIR)/stm32$(BOARD)_doc.pdf &

clean:
	cd $(PROJECT_DIR) ;\
	make clean
	cd $(ORI);\
rm -f openocd/openocd.log
