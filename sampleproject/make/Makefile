INC = ../inc
SRC = ../src
BIN = ../bin
OBJ = ../obj
CFLAGS = -c -g -Wall
LFLAGS = 
GCC = gcc
IFLAGS = -I $(INC)

OBJFILES = $(OBJ)/customer.o $(OBJ)/ticket.o $(OBJ)/main.o

all : $(BIN)/output

$(BIN)/output : $(OBJFILES)
	$(GCC) -o $(BIN)/output $(OBJFILES)


$(OBJ)/main.o : $(SRC)/main.c
	$(GCC) -o $(OBJ)/main.o $(CFLAGS) $(SRC)/main.c $(IFLAGS)

$(OBJ)/customer.o : $(SRC)/customer.c
	$(GCC) -o $(OBJ)/customer.o $(CFLAGS) $(SRC)/customer.c $(IFLAGS)

$(OBJ)/ticket.o : $(SRC)/ticket.c
	$(GCC) -o $(OBJ)/ticket.o $(CFLAGS) $(SRC)/ticket.c $(IFLAGS)

clean :
	rm $(BIN)/output
	rm $(OBJ)/*.o

