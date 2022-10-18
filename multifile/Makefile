
CC = gcc
FLAGS = -g -Wall
output: main.o func.o
	$(CC) -o output main.o func.o

main.o : main.c
	$(CC) -c $(FLAGS)  main.c

func.o : func.c
	$(CC) -c $(FLAGS) func.c


clean :
	rm -f *.o output
