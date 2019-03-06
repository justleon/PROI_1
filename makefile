CC = g++;

program.exe: main.o quadr.o
    $(CC) main.o quadr.o -o program.exe

main.o: main.cpp QuadraticFunc.h
    $(CC) -c -Wall -pedantic main.cpp

quadr.o: QuadraticFunc.cpp QuadraticFunc.h
    $(CC) -c -Wall -pedantic QuadraticFunc.cpp

clean:
    rm -f *.o program.exe
