CC = g++
CFLAGS = -c -Wall --std=c++17
LFLAGS = -Wall
OBJS = main.o staff.o user.o student.o 

all : $(OBJS) 
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o : main.cpp staff.hpp student.hpp
	$(CC) $(CFLAGS) main.cpp

user.o : user.cpp user.hpp
	$(CC) $(CFLAGS) user.cpp

staff.o : staff.cpp staff.hpp
	$(CC) $(CFLAGS) staff.cpp

student.o : student.cpp student.hpp
	$(CC) $(CFLAGS) student.cpp

clean: 
	rm *.o main

run:
	./main
