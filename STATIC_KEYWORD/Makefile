CC = g++
CFLAGS = -c --std=c++17
LFLAGS = -Wall
OBJS = main.o 
OBJS += test.o

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o : main.cpp 
	$(CC) $(CFLAGS) main.cpp

test.o : test.cpp test.h
	$(CC) $(CFLAGS) test.cpp

run : 
	./main 

clean :
	rm *.o main