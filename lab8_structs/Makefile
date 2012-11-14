all:	linkdlist	

linkdlist:	main.o
	gcc -o linkdlist main.o

main.o:	main.c main.h
	gcc -c main.c -Wall

clean:
	rm *.o linkdlist
