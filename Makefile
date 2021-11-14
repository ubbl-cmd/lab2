all:
	gcc abs_max.c abs_min.c diff.c sum.c menu.c -o menu
clean:
	rm -rf *.o hello
