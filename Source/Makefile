CC := g++
SRC := $(shell ls *.cpp)
OBJ := $(SRC:.cpp=.o)
CFLAG := -g -Wall -O
LFLAG :=
TARGET := run.out


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(LFLAG) 

$(OBJ) : %.o : %.cpp %.h
	$(CC) -c $(CFLAG) $< -o $@

.PHONY: clean cleanall cleanobj cleanexe

clean : cleanobj
cleanall: cleanobj cleanexe

cleanexe:
	-rm $(TARGET)

cleanobj: 
	-rm $(OBJ)
