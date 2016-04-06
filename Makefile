# Rob's super awesome makefile
# build an executable named helloworld from helloworld.cpp
CC = g++
ARGS = -g -Wall

SOURCE = assignment1/helloworld/helloworld.cpp
TARGET = helloworld

all: $(TARGET)

$(TARGET):
	$(CC) $(ARGS) -o $(TARGET) $(SOURCE)

#$(TARGET): 