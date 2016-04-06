# Rob's super awesome makefile
# build an executable named helloworld from helloworld.cpp
CC = g++
ARGS = -g -Wall

#looks at this directory, then create .exe in target 
SOURCE1 = assignment1/helloworld/helloworld.cpp
TARGET1 = helloworld

#looks at this directory, then creates .exe in target 
SOURCE2 = assignment1/simpleshell/simpleshell.cpp
TARGET2 = simpleshell

all: $(TARGET)

$(TARGET):
	$(CC) $(ARGS) -o $(TARGET) $(SOURCE)
