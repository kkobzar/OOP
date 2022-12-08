all: task_1

task_1: task_1 task_1.o
	g++ task_1.cpp -o task_1
