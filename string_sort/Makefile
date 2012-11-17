all:		lab6

lab6:		main.o reverse.o sort.o io.o
	gcc -o lab6 reverse.o main.o sort.o io.o

sort.o:		sort.c sort.h
	gcc -c sort.c -Wall

reverse.o: 	reverse.c reverse.h
	gcc -c reverse.c -Wall

io.o:		io.c io.h
	gcc -c io.c -Wall

main.o:		main.c globals.h reverse.h sort.h io.h
	gcc -c main.c -Wall

clean:
	rm *.o lab6
