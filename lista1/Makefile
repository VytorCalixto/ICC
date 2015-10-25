CFLAGS = -O2 -std=c99

all: ex8 ex10


ex8: ex8.c kahan.c
	gcc -o ex8 ex8.c kahan.c $(CFLAGS)

ex10: ex10.c float_t.c
	gcc -o ex10 ex10.c float_t.c $(CFLAGS)

clean:
	rm -fr *.o
