COMPILER=gcc

p1.exec:	p1.o
	$(COMPILER) p1.o -o p1.exec

p1.o: p1.c p1.h
	$(COMPILER) -c p1.c

all: p1.exec

clean: 
	rm *.o *.exec