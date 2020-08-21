
extern int yylineno; /* from lexer */
void yyerror(char *s, ...);

int yylineno;
int yylex();
int yywrap(void);
/* nodes in the Abstract Syntax Tree */
struct ast 
{
  char nodetype;
  struct ast *l;
  struct ast *r;
};

struct str 
{
  char nodetype;			/* type K */
  char * value;
};

/* build an AST */
struct ast *newast(char nodetype, struct ast *left, struct ast *right);
struct ast *newstr(char * value);

/* evaluate an AST */
char * eval(struct ast *);

/* delete and free an AST */
void treefree(struct ast *);
