all: main.c
        gcc -o program main.c

run:
        ./program

clean:
        rm *.o
        rm program
