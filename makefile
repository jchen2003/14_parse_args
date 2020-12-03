all: parse.o
	gcc -o parse parse.o

parse.o: parse.c 
	gcc -c parse.c
	
run: 
	./parse
clean:
	rm *.o