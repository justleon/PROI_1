DEBUG ?= 1
ifeq ($(DEBUG), 1)
	CFLAGS = -Wall -pedantic -g
else
	CFLAGS = -O3
endif
CC = g++ $(CFLAGS)

program: main.o quadr.o
		$(CC) main.o quadr.o -o $@

main.o: main.cpp QuadraticFunc.h
		$(CC) -c main.cpp

quadr.o: QuadraticFunc.cpp QuadraticFunc.h
		$(CC) -c QuadraticFunc.cpp -o quadr.o

clean:
		rm -f *.o program
