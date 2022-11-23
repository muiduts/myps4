CFLAGS=-Wall

myps_check: signatures.o syntax.o parse.o scan.o 
	$(CC) -o myps_check signatures.o syntax.o parse.o scan.o -lfl
signatures.o: ../signatures.c ../signatures.h ../syntax.h
	$(CC) -c -o signatures.o ../signatures.c
syntax.o: ../syntax.c ../syntax.h myps_check.tab.h
	$(CC) -c -o syntax.o ../syntax.c
parse.o: myps_check.tab.c ../signatures.h ../syntax.h
	$(CC) -c -o parse.o myps_check.tab.c
scan.o: lex.yy.c myps_check.tab.h
	$(CC) -c -o scan.o lex.yy.c
myps_check.tab.c myps_check.tab.h &: ../myps_check.y ../syntax.h
	bison -d ../myps_check.y
lex.yy.c: ../myps_check.l
	flex ../myps_check.l
