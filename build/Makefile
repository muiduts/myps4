CC=g++
CFLAGS=-Wall -g

myps4: syntree.o parse.o scan.o 
	$(CC) -o myps4 syntree.o parse.o scan.o
syntree.o: ../syntree.cpp ../syntree.h myps4.tab.h
	$(CC) -c -o syntree.o ../syntree.cpp
parse.o: myps4.tab.c ../syntree.h
	$(CC) -c -o parse.o myps4.tab.c
scan.o: lex.yy.c myps4.tab.h
	$(CC) -c -o scan.o lex.yy.c
myps4.tab.c myps4.tab.h &: ../myps4.y ../syntree.h
	bison -Wall -d ../myps4.y
lex.yy.c: ../myps4.l
	flex ../myps4.l
