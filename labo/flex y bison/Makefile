practica.tab.c: practica.y
	bison -d practica.y
lex.yy.c: practica.l practica.tab.c
	flex practica.l
practica.tab.o: practica.tab.c
	gcc practica.tab.c -c
lex.yy.o: lex.yy.c
	gcc lex.yy.c -c

a.out: practica.tab.o lex.yy.o
	gcc practica.tab.o lex.yy.o -lfl
run: a.out
	./a.out
clean:
	rm -r a.out *.c *.o *.h
