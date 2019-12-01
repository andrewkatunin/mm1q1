translate : translate.o
	gcc -ansi -pedantic -Wall translate.o -o translate
translate.o : translate.c
	gcc -ansi -pedantic -Wall translate.c -c
