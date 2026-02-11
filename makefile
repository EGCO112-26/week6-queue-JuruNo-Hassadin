compile: main.c 
	gcc main.c -o Q

argument: main.c 
	gcc main.c -o Q

run: Q
	./Q