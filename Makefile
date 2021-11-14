all:
	gcc -std=c99 abs_max.c abs_min.c diff.c sum.c menu.c -o menu
clean:
	rm -rf *.o hello
