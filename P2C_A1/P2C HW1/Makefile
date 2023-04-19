parse: p2c_yacc.o p2c_lex.o p2c.o 
	gcc -o parse p2c_lex.o p2c.o p2c_yacc.o

p2c_lex.o: p2c_lex.c p2c.h p2c_yacc.h
	gcc -c p2c_lex.c

p2c_lex.c: p2c_lex.l
	flex -op2c_lex.c p2c_lex.l

p2c_yacc.o: p2c_yacc.c p2c.h p2c_yacc.h
	gcc -c p2c_yacc.c
	
p2c_yacc.c: p2c_yacc.y p2c.h p2c_yacc.h
	bison -d -o p2c_yacc.c p2c_yacc.y
	
p2c_yacc.h: p2c_yacc.y
	bison -d -o p2c_yacc.c p2c_yacc.y
	
p2c.o: p2c.c p2c.h
	gcc -c p2c.c
	
clean:
	rm *.o p2c_lex.c parse p2c_yacc.c p2c_yacc.h

# hidden rules
.c:	.l
	flex -o$< $@
