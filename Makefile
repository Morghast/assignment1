# Rob's super awesome makefile
# build an executable named helloworld from helloworld.cpp
# build an executable named simpleshell from simpleshell.cpp
CC = g++
ARGS = -g -Wall

#looks at this directory, then create .exe in target 
SOURCE1 = assignment1/helloworld/helloworld.cpp
TARGET1 = helloworld

#looks at this directory, then creates .exe in target 
SOURCE2 = assignment1/simpleshell/simpleshell.cpp
TARGET2 = simpleshell

all: $(TARGET1) $(TARGET2)
			
$(TARGET1):
	$(CC) $(ARGS) -o $(TARGET1) $(SOURCE1)

$(TARGET2):
	$(CC) $(ARGS) -o $(TARGET2) $(SOURCE2)
