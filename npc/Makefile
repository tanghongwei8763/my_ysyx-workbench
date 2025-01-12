all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --trace -cc ./vsrc/example.v --exe ./csrc/main.cpp
	make -C obj_dir -f Vexample.mk Vexample
	./obj_dir/Vexample
include ../Makefile
