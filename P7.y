
%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "P7.h"

int cols=0,rows=0, cols_1, rows_1;
char border;

FILE *ff;
%}

%union 
	{
  		struct ast *a;
  		char * p;
	}

/* declare tokens */
%token HTML_STRT HTML_END HEAD_STRT HEAD_END BODY_STRT TEXT BODY_END  HTML TITLE_STRT TITLE_END FONT_STRT FONT_END
%token P_STRT P_END H1_STRT H1_END H2_STRT H2_END H3_STRT H3_END H4_STRT H4_END  NAME_STRT
%token CENTER_STRT CENTER_END BR_STRT  DL_STRT DL_END DT_STRT DT_END DD_STRT DD_END
%token DIV_STRT DIV_END  TAB_STRT TAB_END ROW_STRT ROW_END COL_STRT COL_END
%type <p> TAB_STRT TAB_END ROW_STRT ROW_END COL_STRT COL_END DL_STRT DL_END DT_STRT DT_END DD_STRT DD_END
%token A_STRT UL_STRT UL_END LI_STRT LI_END OL_STRT OL_END
%type <p> TEXT HEAD_STRT HTML_STRT TITLE_STRT TITLE_END P_STRT P_END BODY_END H1_STRT H1_END H2_STRT H2_END
%type <p> H3_STRT H3_END H4_STRT H4_END LI_STRT LI_END UL_STRT UL_END OL_STRT OL_END A_STRT
%type <a> title head LT para body_content body heading list ul ul1 list1 ol ol1 tabdef col1 dl dt 
%token U_STRT U_END B_STRT B_END I_STRT I_END EM_STRT EM_END TT_STRT TT_END STRONG_STRT STRONG_END 
%token SMALL_STRT SMALL_END SUB_STRT SUB_END SUP_STRT SUP_END SPECIAL GSYMBOLS
%type <a> p underline bold ital emp ttype strong small sub sup spec gsymb br url center div 
%type <a>  image tab row col rowdef dlist dlist1 font p1 name fig
%type <p> EM_STRT U_STRT B_STRT I_STRT TT_STRT STRONG_STRT SMALL_STRT SUB_STRT SUP_STRT SPECIAL GSYMBOLS
%type <p> CENTER_STRT CENTER_END DIV_STRT DIV_END   FONT_STRT FONT_END NAME_STRT
%type <p> FIG_STRT FIG_END FIGC_STRT FIGC_END IMG_STRT IMG_END IMG_SRC IMG_WT IMG_HT
%type <a> fig_caption fig1
%token FIG_STRT FIG_END FIGC_STRT FIGC_END IMG_STRT IMG_END IMG_SRC IMG_WT IMG_HT
 
%%
ST: LT {

		//ff=fopen("Ldoc.tex","w");
		fprintf(ff,"%s",eval($1));
		fclose(ff);
	   }
LT: HTML_STRT head body_content HTML_END { $$ = newast('T',$2,$3);};

head:	HEAD_STRT title HEAD_END { $$ = newast('T',newstr($1),$2);};

title: TITLE_STRT TEXT TITLE_END { char *p = (char *)malloc(strlen($1)+strlen($2)); 
									strcat(p,$1); 
									strcat(p,$2); 
									$$ = newast('T',newstr(p),newstr($3));
								 };

body_content: BODY_STRT body BODY_END { $$ = newast('T',$2,newstr($3));};

body:  body para 	{$$ = newast('T',$1,$2);};
	| body heading 	{$$ = newast('T',$1,$2);}; 
	| body br 		{$$ = newast('T',$1,$2);};
	| body div 		{$$ = newast('T',$1,$2);};
	| body url 		{$$ = newast('T',$1,$2);};
	| body ul 		{$$ = newast('T',$1,$2);};
	| body ol 		{$$ = newast('T',$1,$2);};
	| body tab		{$$ = newast('T',$1,$2);};
	| body dl 		{$$ = newast('T',$1,$2);};
	| body fig 		{$$ = newast('T',$1,$2);};
	| body name 	{$$ = newast('T',$1,$2);};
	| 				{$$ =newstr("");};

para: P_STRT p P_END {$$ = newast('T',newstr($1),$2);};

p:    p underline   {$$ = newast('T',$1,$2);};
	| p bold		{$$ = newast('T',$1,$2);};
	| p ital		{$$ = newast('T',$1,$2);};
	| p emp 		{$$ = newast('T',$1,$2);};
	| p ttype		{$$ = newast('T',$1,$2);};
	| p strong 		{$$ = newast('T',$1,$2);};
	| p small 		{$$ = newast('T',$1,$2);};
	| p sub 		{$$ = newast('T',$1,$2);};
	| p sup 		{$$ = newast('T',$1,$2);};
	| p spec        {$$ = newast('T',$1,$2);};
	| p gsymb       {$$ = newast('T',$1,$2);};
	| p center 		{$$ = newast('T',$1,$2);};
	| p image       {$$ = newast('T',$1,$2);};    	
	| p url 		{$$ = newast('T',$1,$2);};
	| p font		{$$ = newast('T',$1,$2);};
	| p TEXT		{$$ = newast('T',$1,newstr($2));};
	| {$$ =newstr("");};


center : CENTER_STRT p1 {$$=newast('T',newstr($1),$2);}

p1:		p CENTER_END {$$ = newast('T',$1,newstr("\\end{center} "));};

underline: U_STRT TEXT U_END 
		{	
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"} ");
			$$ = newast('T',newstr($1),newstr(p));
		};
bold: B_STRT TEXT B_END 
		{	
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"} ");
			$$ = newast('T',newstr($1),newstr(p));
		};
ital: I_STRT TEXT I_END 
		{	
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"} ");
			$$ = newast('T',newstr($1),newstr(p));
		};
emp: EM_STRT TEXT EM_END 
		{	
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"} ");
			$$ = newast('T',newstr($1),newstr(p));
		};
ttype: TT_STRT TEXT TT_END 
		{	
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"} ");
			$$ = newast('T',newstr($1),newstr(p));
		};

strong: STRONG_STRT TEXT STRONG_END 
		{	
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"} ");
			$$ = newast('T',newstr($1),newstr(p));
		};
small: SMALL_STRT TEXT SMALL_END
		{	
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"} ");
			$$ = newast('T',newstr($1),newstr(p));
		};

sub: SUB_STRT TEXT SUB_END 
		{
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"}$ ");
			$$ = newast('T',newstr($1),newstr(p));
		};
sup: SUP_STRT TEXT SUP_END 
		{
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"}$ ");
			$$ = newast('T',newstr($1),newstr(p));
		};
spec: SPECIAL { $$ = newast('T',NULL,newstr($1));};


gsymb: GSYMBOLS  { $$ = newast('T',NULL,newstr($1));};


		
heading: H1_STRT TEXT H1_END 
		{
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"}");
			$$ = newast('T',newstr($1),newstr(p));
		};
		| H2_STRT TEXT H2_END 
		{
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"}");
			$$ = newast('T',newstr($1),newstr(p));
		};
		| H3_STRT TEXT H3_END 
		{
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"}");
			$$ = newast('T',newstr($1),newstr(p));
		};
		| H4_STRT TEXT H4_END 
		{
			char *p = (char *)malloc(strlen($2)+3);
			strcat(p,$2);
			strcat(p,"}");
			$$ = newast('T',newstr($1),newstr(p));
		};

font: FONT_STRT TEXT FONT_END 
		{
			char *p = (char *) malloc(strlen($2)+20);
			char * fontnam = (char *)malloc(15);
			char c = $1[12];
			if(c=='0'|| c=='1')
				strcpy(fontnam,"\\tiny");
			else if (c=='2')
				strcpy(fontnam,"\\scriptsize");
			else if (c=='3')
				strcpy(fontnam,"\\footnotesize");
			else if (c=='4')
				strcpy(fontnam,"\\small");
			else if (c=='5') 
				strcpy(fontnam,"\\normalsize");
			else if (c=='6')
				strcpy(fontnam,"\\large");
			else if (c=='7')
				strcpy(fontnam,"\\LARGE");
			else if (c=='8')
				strcpy(fontnam,"\\huge");
			else
				strcpy(fontnam,"\\Huge");

			strcpy(p,"{ ");
			strcat(p,fontnam);
			strcat(p," ");
			strcat(p, $2);
			strcat(p, " }");
			$$ = newast('T',NULL,newstr(p));
		};

fig: FIG_STRT fig1 {$$=newast('T',newstr($1),$2);};

fig1: image fig_caption FIG_END {$$=newast('T',$1,$2);};

fig_caption: FIGC_STRT TEXT FIGC_END { $$=newast('T',newstr("\\caption{"),newstr(strcat($3,"} \\end{figure}")));};

br: BR_STRT {$$ = newast('T',NULL,newstr("\\newline "));};
url: A_STRT {$$ = newast('T',NULL,newstr($1));};
name: NAME_STRT {$$ = newast('T',NULL,newstr($1));};

image: IMG_STRT IMG_SRC IMG_END	{ 
							char *p = (char *)malloc(200);
							strcpy(p,"{");
							strcat(p,$2);
							strcat(p,"}");
							$$=newast('T',newstr("\\includegraphics"),newstr(p));
								};
	| IMG_STRT IMG_SRC IMG_HT IMG_WT IMG_END 
						{
							char *p = (char *)malloc(200);
							strcpy(p,"\\includegraphics");
							strcat(p,"[width=");
							strcat(p,$4);
							strcat(p,"px, height=");
							strcat(p,$3);
							strcat(p,"px ]{");
                            strcat(p,$2);
                            strcat(p,"}");
                            $$ = newast('T',NULL,newstr(p));
						};

tab:	TAB_STRT tabdef {
						

						rows=0;cols=0;
						char *ch = (char *)malloc(50);
						int no_cols=cols_1/rows_1,i;
						strcat(ch,"\\begin{tabular}{");	
						if(border=='1')
						{
						for(i=0;i<no_cols;i++)
							strcat(ch,"|l");
						strcat(ch,"|}");
						char *p = (char *) malloc(150);
						//strcpy(p,$1);
						strcat(p,ch);
						strcat(p,"\\hline ");
						$$=newast('T',newstr(p),$2);
						}
						else
						{
						for(i=0;i<no_cols;i++)
						strcat(ch,"l ");
						strcat(ch," }");
						char *p = (char *) malloc(150);
						//strcpy(p,$1);
						strcat(p,ch);
						//strcat(p,"\\hline ");
						$$=newast('T',newstr(p),$2);
						}
						};

tabdef:	row TAB_END	
					{ 
					$$ = newast('T',$1,newstr("\\end{tabular} \\newline"));
					cols_1=cols; rows_1=rows;
					
					};

row: row rowdef {$$=newast('T',$1,$2);}
	| {$$ =newstr("");};


rowdef:  ROW_STRT col1 ROW_END 	{
								rows++;	
								if(border=='1')
								$$ = newast('T',$2,newstr("\\\\ \\hline "));
								else
								$$ = newast('T',$2,newstr("\\\\ "));	
								};

col1: col COL_STRT TEXT COL_END {
									cols++;
									char * p = (char *)malloc(strlen($3)+4);
									strcat(p,$3);
									$$=newast('T',$1,newstr(p));
								}; 


col: col COL_STRT TEXT COL_END {
									cols++;
									char * p = (char *)malloc(strlen($3)+4);
									strcat(p,$3);
									strcat(p," & ");
									$$=newast('T',$1,newstr(p));
								}; 
	| COL_STRT TEXT COL_END {
							cols++;

							char * p = (char *)malloc(strlen($2)+5);
							strcpy(p,$2);
							strcat(p," & ");
							$$ = newstr(p);
							};

dl: DL_STRT dlist1 			{$$=newast('T',newstr("\\begin{description}"),$2);};

dlist1: dlist DL_END 		{$$=newast('T',$1,newstr("\\end{description}"));};
dlist: dlist dt 			{$$ = newast('T',$1,$2);};
	 |  					{$$ =newstr("");};
dt: DT_STRT TEXT DT_END DD_STRT p DD_END  
						{
							char * p = (char *)malloc(strlen($2)+7);
							strcpy(p,"\\item[");
							strcat(p,$2);
							strcat(p,"] ");
							//strcat(p,$5);
							$$ = newast('T',newstr(p),$5);
						};

div : DIV_STRT body DIV_END 
			{
				$$ = newast('T',newstr("\\section*{}"),$2);
			};

ul : UL_STRT  ul1 { $$ = newast('T',newstr($1),$2);};
ul1 : list UL_END { $$ = newast('T',$1,newstr($2));};
ol : OL_STRT ol1  { $$ = newast('T',newstr($1),$2);}; 
ol1: list OL_END  { $$ = newast('T',$1,newstr($2));};
list: list list1  { $$ = newast('T',$1,$2);};
	| list ol 	  { $$ = newast('T',$1,$2);};
	| list ul 	  { $$ = newast('T',$1,$2);};
	| 			  {$$ =newstr("");};
list1: LI_STRT TEXT LI_END {$$ = newast('T',newstr($1),newstr($2));};
