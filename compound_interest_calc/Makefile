# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects
BUILDDIR=bin
SRCS := $(wildcard *.c)
TARGETS=$(BUILDDIR)/$(SRCS:%.c=%)

.phony: all
all: $(TARGETS)

CC = gcc			# compiler to use

bin/%.o : %.c
	mkdir -p $(BUILDDIR)
	@echo "Creating object.."
	${CC} -c $< -o $@

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${TARGETS}
	rm -r bin