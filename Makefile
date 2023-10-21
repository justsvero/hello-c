CC=clang-15
CFLAGS=-Wall -Wextra -pedantic -std=c11 -ggdb

LIBS=

all: hello

hello: main.c strutils.c
	$(CC) $(CFLAGS) -o$@ $^ $(LIBS)

clean:
	rm -f hello
