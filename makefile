program.exe: main.o quadr.o
    g++ main.o quadr.o -o program.exe

main.o: main.cpp QuadraticFunc.h
    g++ -c -Wall -pedantic main.cpp

quadr.o: QuadraticFunc.cpp QuadraticFunc.h
    g++ -c -Wall -pedantic QuadraticFunc.cpp

clean:
    rm -f *.o program.exe
