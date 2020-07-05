gcc -c -Wall -g main.c -o main.o
gcc -c -Wall -g cow.c -o cow.o
gcc -c -Wall -g animal.c -o animal.o
gcc main.o cow.o animal.o -Wall -g -o a.out
