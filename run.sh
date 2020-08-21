bison -d P7.y
flex P7.l
gcc -o P7 P7.tab.c lex.yy.c P7.c
./P7 $1 $2