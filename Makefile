CC=gcc
CFLAGS=-c -Wall -I.

all: distance

distance: main.o point.o
	@$(CC) -o distance main.o point.o -I. -lm
	@echo "    Done. Now, execute the 'distance' file."

main.o: main.c
	@$(CC) $(CFLAGS) main.c

point.o: point.c
	@$(CC) $(CFLAGS) point.c

clean:
	@rm -rf *.o distance 
	@echo "    Cleaned!"