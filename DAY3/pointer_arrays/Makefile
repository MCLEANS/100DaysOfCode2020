CC = g++
CFLAGS = -c -Wall --std=c++17
LFLAGS = -Wall
OBJS = main.o 

all : $(OBJS) 
	@echo "-------------Linking------------"
	$(CC) $(LFLAGS) $(OBJS) -o main 
	

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp 

clean :
	@echo "-----------cleaning--------------"
	rm *.o main
	clear 

run :
	./main