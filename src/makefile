CC = gcc
CFLAGS = -Wall 
OBJS = main.o list.o pollard.o

all: p_1

p_1:	$(OBJS)
		$(CC) $(CFLAGS) $^ -o p_1

main.o: main.c ./modules/linkedlist/list.h 
		$(CC) -c $(CFLAGS) main.c

pollard.o: pollard.c pollard.h ./modules/linkedlist/list.h
		$(CC) -c $(CFLAGS) pollard.c

list.o: ./modules/linkedlist/list.c ./modules/linkedlist/list.h
		$(CC) -c $(CFLAGS) ./modules/linkedlist/list.c

clean:
		rm -rf *.o p_1
