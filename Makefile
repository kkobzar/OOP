all: task_1

task_1: task_1.o task_1.o
g++ -o task_1 task_1.o task_1.o
