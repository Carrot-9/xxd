CC=gcc
SRC= xxd.c
CFLAGS= -Wall -Wextra -g

xxd.o: $(SRC)
	$(CC) -c $(SRC) -o $@

xxd: xxd.o
	$(CC) $< -o $@

PHONY: clean

clean:
	rm -f xxd.o
	rm -f xxd
	
	