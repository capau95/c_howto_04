all: calc

calc: calc.o
	gcc -o calc calc.o -lm
	
calc.o: calc.c
	gcc -c calc.c

clean: 
	-rm -f calc.o	
	-rm -f calc
