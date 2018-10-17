# Arquivo de Script Makefile
# 
# Aula de LP1 2018.2
# 17/10/2018
# Clonagem atual para teste :
# 				git clone https://github.com/gdiael/LP01_012_Datas.git
#
# Gdiael Souto Barros
#

CC = g++

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

F01 = data
F02 = main

PROG1 = $(BIN)/Datas

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJ1 = $(OBJ)/$(F01).o $(OBJ)/$(F02).o
OBJDB = $(SRC)/$(F01).cpp $(SRC)/$(F02).cpp

all: mkdirs $(PROG1)

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG1): $(OBJ1)
	$(CC) $(CPPFLAGS) -o $(PROG1) $(OBJ1)

db$(PROG1): $(OBJDB)
	$(CC) -g $(CPPFLAGS) -o $(PROG1) $(OBJDB)

$(OBJ)/$(F01).o: $(SRC)/$(F01).cpp $(INC)/$(F01).h
	$(CC) $(CPPFLAGS) -c $(SRC)/$(F01).cpp -o $(OBJ)/$(F01).o

$(OBJ)/$(F02).o: $(SRC)/$(F02).cpp $(INC)/$(F01).h
	$(CC) $(CPPFLAGS) -c $(SRC)/$(F02).cpp -o $(OBJ)/$(F02).o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

debug: db$(PROG1)
	gdb $(PROG1)

run: all
	$(PROG1)

# propriedades para serem usadas no windows com o MinGW com gcc e gdb
# não usar o comando Make e sim o executável: mingw32-make.exe

mkdirswin:
	if not exist $(BIN) mkdir "$(BIN)
	if not exist $(OBJ) mkdir "$(OBJ)

runwin: mkdirswin $(PROG1)
	chcp 65001
	$(PROG1)

debugwin: cleanwin db$(PROG1)

cleanwin: 
	del /q "$(BIN)\*
	del /q "$(OBJ)\*