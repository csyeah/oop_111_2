main.exe:main.o matrix.o
	g++ main.o matrix.o -o main.exe
matrix.o:matrix.cpp matrix.h
	g++ -c matrix.cpp
main.o:main.cpp
	g++ -c main.cpp
clean:
	rm -f main.o matrix.o main.exe