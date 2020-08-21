
/*
 * helper functions for P7
 */
#  include <stdio.h>
#  include <stdlib.h>
#  include <stdarg.h>
# include  <string.h>
#  include "P7.h"
FILE *ff;
struct ast * newast(char nodetype, struct ast *l, struct ast *r)
{
  struct ast *a = malloc(sizeof(struct ast));
  
  if(!a) {
    yyerror("out of space");
    exit(0);
  }
  a->nodetype = nodetype;
  a->l = l;
  a->r = r;
  return a;
}

struct ast * newstr(char * value)
{
  struct str *a = malloc(sizeof(struct str));
  
  if(!a) {
    yyerror("out of space");
    exit(0);
  }
  a->nodetype = 'K';
  a->value = value;
  return (struct ast *)a;
}

char * eval(struct ast *a)
{
  
  if(a->nodetype == 'K')
  {
 // printf("%s \n",(((struct str *)a) -> value));

  char *yy=(char *)malloc(140000);
  strcpy(yy,(((struct str *)a) -> value));
  a=NULL;
  free(a);
  //printf("K node detected, content:%s \n",yy);
  return yy;
  
    //printf("K node detected, content:%s \n",(((struct str *)a) -> value));
    //return "aa";
  }
  else 
  {
  
      if((a->l)==NULL && (a->r)==NULL) return NULL;
      else if ((a->l)!=NULL && (a->r)==NULL)
      {
        char *yy=(char *)malloc(140000);
        strcpy(yy,eval(a->l));
        a=NULL;
        free(a); 
        return yy;
      }
      else if ((a->l)==NULL && (a->r)!=NULL)
      {
        char *yy=(char *)malloc(140000);
        strcpy(yy,eval(a->r));
        a=NULL;
        free(a); 
        return yy;
      }
      else
      {
      char *yy=(char *)malloc(140000);
      strcpy(yy,eval(a->l));
      char *yyy=(char *)malloc(140000);
      strcpy(yyy,eval(a->r));
      a=NULL;
      free(a);
     
      strcat(yy,yyy);
      //printf("%s",yy);
      return yy;
      }
      
       //    eval(a->l);
      //  eval(a->r);
        //printf("non leaf node detected\n");
        //return "bb"; 
  }

}

void yyerror(char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

int yyparse();
int yywrap(void)
{
 return 1;
}

int main(int argc, char** argv)
{
extern FILE *yyin;


if(argc > 1) 
{
  // file name is passed as argument
  if(!(yyin = fopen(argv[1], "r"))) 
  {
  perror(argv[1]);
  return (1);
  }
 if(!(ff = fopen(argv[2], "w"))) 
  {
  perror(argv[2]);
  return (1);
  }

}
 yyparse();
 return 0;
}