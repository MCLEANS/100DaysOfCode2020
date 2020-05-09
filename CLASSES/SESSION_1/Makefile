CC = g++
CFLAGS = -c --std=c++17
LFLAGS = -Wall
OBJS = main.o 
OBJS += person.o

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main 

main.o : main.cpp person.h
	$(CC) $(CFLAGS) main.cpp 

person.o : person.cpp person.h
	$(CC) $(CFLAGS) person.cpp

run :
	./main 

clean :
	rm *.o main