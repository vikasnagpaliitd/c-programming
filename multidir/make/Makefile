PROJ=$(HOME)/github/c-programming/multidir
INC = $(PROJ)/inc
SRC = $(PROJ)/src
BIN = $(PROJ)/bin
OBJ = $(PROJ)/obj
CFLAGS = -c -g -Wall
LFLAGS = 
GCC = gcc
IFLAGS = -I $(INC)

all : $(BIN)/output

$(BIN)/output : $(OBJ)/postorder.o $(OBJ)/stack.o
	$(GCC) -o $(BIN)/output $(OBJ)/postorder.o $(OBJ)/stack.o

$(OBJ)/postorder.o : $(SRC)/postorder.c
	$(GCC) -o $(OBJ)/postorder.o $(CFLAGS) $(SRC)/postorder.c $(IFLAGS)

$(OBJ)/stack.o : $(SRC)/stack.c
	$(GCC) -o $(OBJ)/stack.o $(CFLAGS) $(SRC)/stack.c $(IFLAGS)

clean :
	rm $(BIN)/output
	rm $(OBJ)/*.o

