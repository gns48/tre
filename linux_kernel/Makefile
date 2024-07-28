TARGET=tre

obj-m += $(TARGET).o

$(TARGET)-objs += regcomp.o regexec.o tre-compile.o tre_kernel.o \
	tre-match-parallel.o tre-parse.o regerror.o tre-ast.o \
	tre-filter.o tre-match-backtrack.o tre-mem.o tre-stack.o

ccflags-y := -Wall

ifdef DEBUG
ccflags-y += -DDEBUG
endif

ifndef KV
KV = $(shell uname -r)
endif

all:
	make -C /lib/modules/$(KV)/build M=$(PWD) modules

clean:
	rm -f *~
	make -C /lib/modules/$(KV)/build M=$(PWD) clean
