all: hello

task_1: task_1.o task_1.o
 g++ -o task_1 task_1.o task_1.o

func.o: func.cpp func.h
 g++ -c func.cpp

hello.o: hello.cpp
 g++ -c hello.cpp