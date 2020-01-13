CC=clang
CFLAGS=-Wall -Wextra -Werror -Wpedantic
SRC=$(wildcard *.c)
OBJS=$(SRC:%.c=%.o)
PROGS=$(SRC:%.c=%)

all: $(PROGS)

$(PROGS): $(OBJS)

$(OBJS): $(SRC)

.PHONY: clean
clean:
	rm -f $(OBJS) $(PROGS)