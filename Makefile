# Rob's super awesome makefile
# build an executable named helloworld from helloworld.cpp

all: helloworld.cpp
		g++ -g -Wall -o helloworld helloworld.cpp