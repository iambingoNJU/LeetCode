
ifeq ($(S),)
$(error Please input solution name you want to create.(make S=solution))
endif

all:
	mkdir -p $(S)
	echo "\ninclude ../template/Makefile.template\n"	> $(S)/Makefile
	cat template/readme.template						> $(S)/readme.md
	cat template/TEST.template							> $(S)/TEST.cpp
	cat template/solution.template						> $(S)/solution.cpp

