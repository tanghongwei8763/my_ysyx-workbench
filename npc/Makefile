all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --trace -cc ./vsrc/*.v --exe ./csrc/*.cpp
	make -C obj_dir -f Vysyx_25020037_cpu.mk Vcpu
	./obj_dir/Vysyx_25020037_cpu
include ../Makefile
