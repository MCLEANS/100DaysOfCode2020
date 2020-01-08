CC = g++
CLFAGS = -c -Wall
LFLAGS = -Wall
OBJS = main.o 

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -O main

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp 

run :
	./main 

clean: 
	rm *.o main