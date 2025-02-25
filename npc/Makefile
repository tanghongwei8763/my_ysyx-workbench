all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator Wall --trace -cc ./vsrc/*.v --exe ./csrc/*.cpp
	make -C obj_dir -f Vcpu.mk Vcpu
	./obj_dir/Vcpu
include ../Makefile
