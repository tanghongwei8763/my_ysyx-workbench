all:
	@echo "Write this Makefile by your self."
	
sim:
	$(call git_commit, "SiM RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --trace -cc ./vsrc/example.v --exe ./csrc/main.cpp
	make -C obj_dir -f Vtop.mk Vtop
	./obj_dir/Vtop
include ../Makefile
