# Rob's super awesome makefile
# build an executable named helloworld from helloworld.cpp
CC = g++
ARGS = -g -Wall

SOURCE = helloworld.cpp
TARGET = helloworld

all: $(TARGET)

$(TARGET): $(CC) $(ARGS) -o $(TARGET) $(SOURCE)

#$(TARGET): 