
CXX=c++
CXX=g++
CXXFLAGS= -g -std=c++11 -Wall -Wconversion -Wextra -pedantic


all: main

main: ArrayDeque.h


clean: 
	rm -f main
