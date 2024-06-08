all: A1.c
	gcc -std=c99 -Wall -o  A1 A1.c

run: A1
	./A1

clean: A1
	rm -rf ./A1
