fill: main.o
	gcc -o fill main.o
main.o: main.c
	gcc -c main.c
clean:
	rm -f *.o fill
