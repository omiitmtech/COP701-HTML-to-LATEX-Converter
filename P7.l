/*
$ bison -d P7.y
$ flex P7.l
$ $ gcc -o P7 P7.tab.c lex.yy.c P7.c
*/
%x COMM

%{
#include <stdio.h>
# include "P7.h"
# include "P7.tab.h"
	extern char border;
%}


diff	[ \t\n]
word1	[a-zA-Z0-9.,;?:='@/]
urldef  ("<a href="([a-zA-Z0-9.:"'" ]+|"#"|"="|dubquotes|"//")*">"([a-zA-Z0-9 ]+)"</a>")
urlname ("<a name="([a-zA-Z0-9"\"" ])+"></a>")
imgdef 	("<img src='"([a-zA-Z0-9. ]+)"'"([ ])*"/>")
special ("{"|"}"|"_"|"^"|"$"|"%"|"~"|"#"|"&"|"\\")
rowdef 	("<tr>"|"</tr>"|"<td>"|"</td>"|{diff}|[a-zA-Z0-9 ]*)
gsym1 ("&alpha;"|"&beta;"|"&Gamma;"|"&gamma;"|"&Delta;"|"&delta;"|"&epsilon;"|"&Theta;"|"&theta;"|"&iota;"|"&rho;")
gsym2 ("&sigma;"|"&Sigma;"|"&tau;"|"&Lambda;"|"&lambda;"|"&Pi;"|"&pi;"|"&omega;"|"$Rho"|"&Xi;"|"&xi;"|"&Phi;"|"&phi;")
gsym3 ("&Alpha;"|"&Beta;"|"&Epsilon;"|"&Iota;"|"&Tau;")
fontstrt ("<font size='"([0-9]+)"'>")
word 	{word1}+({word1}|{diff})*




%x IMG_ARG
%%

"<html>"|"<HTML>"		{ 	return HTML_STRT;}

"</html>"|"</HTML>"		{	return HTML_END;}

"<head>"|"<HEAD>" 		{ 
							yylval.p=(char *)malloc(100);
							strcpy(yylval.p,"\\documentclass{article}");
							strcat(yylval.p,"\\usepackage{hyperref}");
							strcat(yylval.p,"\\usepackage{graphicx}");
							strcat(yylval.p,"\\begin{document}");
							return HEAD_STRT;
						}

"</head>"|"</HEAD>"		{ 	return HEAD_END;}

"<body>"|"<BODY>"		{ 	return BODY_STRT;}

"</body>"|"</BODY>"		{  
							yylval.p=(char *)malloc(100);
							strcpy(yylval.p,"\\end{document}");
							return BODY_END;			
						}

"<title>"|"<TITLE>"		{
							yylval.p=(char *)malloc(100);
							strcpy(yylval.p,"\\title{");
							return TITLE_STRT;
						}

"</title>"|"</TITLE>"	{
							yylval.p=(char *)malloc(100);
							strcpy(yylval.p,"}\\maketitle ");
							return TITLE_END;
						}

"<!DOCTYPE"(.*)">" ;

"<p>"|"<P>"				{	 
							yylval.p=(char *)malloc(8);
							strcpy(yylval.p,"\\par ");
							return P_STRT;
						}
"</p>"|"</P>"			{	return P_END;}

"<h1>"|"<H1>"			{	 
							yylval.p=(char *)malloc(10);
							strcpy(yylval.p,"\\section{");
							return H1_STRT;
						}
"</h1>"|"</H1>"			{	return H1_END;}

"<h2>"|"<H2>"			{	
							yylval.p=(char *)malloc(13);
							strcpy(yylval.p,"\\subsection{");
							return H2_STRT;
						}
"</h2>"|"</H2>"			{ return H2_END;}
"<h3>"|"<H3>"			{
							yylval.p=(char *)malloc(16);
							strcpy(yylval.p,"\\subsubsection{");	
							return H3_STRT;
						}
"</h3>"|"</H3>"			{	return H3_END;}

"<h4>"|"<H4>"			{	
							yylval.p=(char *)malloc(16);
							strcpy(yylval.p,"\\subsubsection{");
							return H4_STRT;
						}
"</h4>"|"</H4>"			{	return H4_END;}

"<center>"|"<CENTER>"	{	
							yylval.p=(char *)malloc(15);
							strcpy(yylval.p,"\\begin{center}");
							return CENTER_STRT;
						}
"</center>"|"</CENTER>"	{	return CENTER_END;}

"<br>"|"<BR>"			{	return BR_STRT;}

"<div>"|"<DIV>"			{	return DIV_STRT;}
"</div>"|"</DIV>"		{	return DIV_END;}

"<u>"|"<U>"				{ 
							yylval.p = (char *)malloc(12);
							strcpy(yylval.p,"\\underline{");
							return U_STRT;
						}
"</u>"|"</U>"			{ 	return U_END;}

"<b>"|"<B>"				{ 
							yylval.p = (char *)malloc(9);
							strcpy(yylval.p,"\\textbf{");
							return B_STRT;
						}
"</b>"|"</B>"			{ 	return B_END;}

"<i>"|"<I>"				{ 
							yylval.p = (char *)malloc(8);
							strcpy(yylval.p,"\\textit{");
							return I_STRT;
						}
"</i>"|"</I>"			{ 	return I_END;}

"<em>"|"<EM>"			{	
							yylval.p = (char *)malloc(7);
							strcpy(yylval.p,"\\emph{");
							return EM_STRT;
						}	
"</em>"|"</EM>"			{	return EM_END;}

"<tt>"|"<TT>"			{	
							yylval.p = (char *)malloc(9);
							strcpy(yylval.p,"\\texttt{");
							return TT_STRT;
						}
"</tt>"|"</TT>"			{	return TT_END;}

"<strong>"|"<STRONG>"	{	
							yylval.p = (char *)malloc(9);
							strcpy(yylval.p,"\\textbf{");
							return STRONG_STRT;
						}
"</strong>"|"</STRONG>"	{	return STRONG_END;}

"<small>"|"<SMALL>"		{	
							yylval.p = (char *)malloc(8);
							strcpy(yylval.p,"\\small{");
							return SMALL_STRT;
						}
"</small>"|"</SMALL>"	{	return SMALL_END;}

"<sub>"|"<SUB>"			{	
							yylval.p = (char *)malloc(3);
							strcpy(yylval.p,"$_{");
							return SUB_STRT;
						}
"</sub>"|"</SUB>"		{	return SUB_END;}

"<sup>"|"<SUP>"			{	
							yylval.p = (char *)malloc(3);
							strcpy(yylval.p,"$^{");
							return SUP_STRT;
						}
"</sup>"|"</SUP>"		{	return SUP_END;}


"<!--"					{	BEGIN(COMM);}
<COMM>"-->"				{	BEGIN(INITIAL);}

"<figure>"				{
							yylval.p = (char *)malloc(20);
							strcpy(yylval.p,"\\begin{figure}");	
							 return FIG_STRT;
						}

"</figure>"				{
							 return FIG_END;
						}

"<figcaption>"			{
							return FIGC_STRT;
						}
"</figcaption>"			{
							return FIGC_END;
						}						

	

"<img"					{ printf("img detected"); BEGIN(IMG_ARG);return IMG_STRT; }
<IMG_ARG>"src=\""[a-zA-z.]+"\""		{ printf("src detected"); 
                                        char * s=(char *)malloc(100);
                                       strcpy(s,yytext);

                                       char * k=(char *)malloc(100);

                                       int i=0;int j=0;
                                       while(s[i]!='"'){i++;}i++;

                                       while(s[i]!='"'){k[j]=s[i];j++;i++;}k[j]='\0';
                                       yylval.p=(char *)malloc(100);
                                       strcpy(yylval.p,k); printf("%s",k);
                                       return IMG_SRC;
                                         }

<IMG_ARG>"height=\""[0-9]+"\""	{ printf("height detected %s",yytext);
                                       char * s=(char *)malloc(100);
                                       strcpy(s,yytext);

                                       char * k=(char *)malloc(100);

                                       int i=0;int j=0;
                                       while(s[i]!='"'){i++;}i++;

                                       while(s[i]!='"'){k[j]=s[i];j++;i++;}k[j]='\0';
                                       yylval.p=(char *)malloc(100);
                                       strcpy(yylval.p,k); printf("%s",k);
                                       	return IMG_HT;
                                       }

<IMG_ARG>"width=\""[0-9]+"\""	{ printf("width detected %s",yytext);
                                       char * s=(char *)malloc(100);
                                       strcpy(s,yytext);

                                       char * k=(char *)malloc(100);

                                       int i=0;int j=0;
                                       while(s[i]!='"'){i++;}i++;

                                       while(s[i]!='"'){k[j]=s[i];j++;i++;}k[j]='\0';
                                       yylval.p=(char *)malloc(100);
                                       strcpy(yylval.p,k); printf("%s",k);
                                       return IMG_WT;
                                  }

<IMG_ARG>"/>"					{ printf("img end detected"); BEGIN 0; return IMG_END;}


<IMG_ARG>"src='"[a-zA-z.]+"'"		{ printf("src detected"); 
                                        char * s=(char *)malloc(100);
                                       strcpy(s,yytext);

                                       char * k=(char *)malloc(100);

                                       int i=0;int j=0;
                                       while(s[i]!='\''){i++;}i++;

                                       while(s[i]!='\''){k[j]=s[i];j++;i++;}k[j]='\0';
                                       yylval.p=(char *)malloc(100);
                                       strcpy(yylval.p,k); printf("%s",k);
                                       return IMG_SRC;
                                         }

<IMG_ARG>"height='"[0-9]+"'"	{ printf("height detected %s",yytext);
                                       char * s=(char *)malloc(100);
                                       strcpy(s,yytext);

                                       char * k=(char *)malloc(100);

                                       int i=0;int j=0;
                                       while(s[i]!='\''){i++;}i++;

                                       while(s[i]!='\''){k[j]=s[i];j++;i++;}k[j]='\0';
                                       yylval.p=(char *)malloc(100);
                                       strcpy(yylval.p,k); printf("%s",k);
                                       	return IMG_HT;
                                       }

<IMG_ARG>"width='"[0-9]+"'"	{ printf("width detected %s",yytext);
                                       char * s=(char *)malloc(100);
                                       strcpy(s,yytext);

                                       char * k=(char *)malloc(100);

                                       int i=0;int j=0;
                                       while(s[i]!='\''){i++;}i++;

                                       while(s[i]!='\''){k[j]=s[i];j++;i++;}k[j]='\0';
                                       yylval.p=(char *)malloc(100);
                                       strcpy(yylval.p,k); printf("%s",k);
                                       return IMG_WT;
                                  }



{urldef}				{	

							char *ch1, *ch2;int i,j;
							yylval.p = (char *)malloc(100);
							ch1 = (char *)malloc(50);
							ch2 = (char *)malloc(50);
							for(i=9;yytext[i]!='\"';i++)
								ch1[i-9]=yytext[i];
							strcat(yylval.p,"\\href{");
							strcat(yylval.p,ch1);
							strcat(yylval.p,"}");
							while(yytext[i]!='>')
								i++;

							j=i+1;
							for(i;yytext[i]!='<';i++)
								ch2[i-j]=yytext[i];
							strcat(yylval.p,"{");
							strcat(yylval.p,ch2);
							strcat(yylval.p,"}");
							return A_STRT;
						}

{urlname}				{
						
							int i;
							yylval.p = (char *)malloc(100);
							char *ch = (char *)malloc(50);
							for(i=9;yytext[i]!='\"';i++)
								ch[i-9]=yytext[i];

							strcat(yylval.p,"\\label{");
							strcat(yylval.p,ch);
							strcat(yylval.p,"}");
							return NAME_STRT;
						}
						
"<table border='0'>"|"<table border='1'>"		{ 


						if(yytext[15]=='1')
							border='1';
						else
							border='0';

							yylval.p=(char *)malloc(40);
							//strcpy(yylval.p,"\\begin{tabular}");
							strcpy(yylval.p,yytext);
							return TAB_STRT;
						}
"</table>"|"</TABLE>"	{	return TAB_END;}
"<tr>"|"<TR>"			{	return ROW_STRT;}
"</tr>"|"</TR>"			{	return ROW_END;}
"<td>"|"<TD>"			{ 	return COL_STRT;} 
"</td>"|"</TD>"			{   return COL_END;}

"<DL>"					{ 	return DL_STRT;}
"</DL>"					{ 	return DL_END;}
"<DT>"					{ 	return DT_STRT;}
"</DT>"					{ 	return DT_END;}
"<DD>"					{ 	return DD_STRT;}
"</DD>"					{ 	return DD_END;}

{fontstrt}				{
							yylval.p = (char *)malloc(yyleng);
							strcpy(yylval.p,yytext);
							return FONT_STRT;
						}

"</font>"				{	return FONT_END;}
"<ul>"|"<UL>"			{	
							yylval.p=(char *)malloc(16);
							strcpy(yylval.p,"\\begin{itemize}");
							return UL_STRT;
						}
"</ul>"|"</UL>"			{	
							yylval.p=(char *)malloc(14);
							strcpy(yylval.p,"\\end{itemize}");
							return UL_END;
						}

"<ol>"|"<OL>"			{	
							yylval.p=(char *)malloc(18);
							strcpy(yylval.p,"\\begin{enumerate}");
							return OL_STRT;
						}
"</ol>"|"</OL>"			{	
							yylval.p=(char *)malloc(16);
							strcpy(yylval.p,"\\end{enumerate}");
							return OL_END;
						}

"<li>"|"<LI>"			{	
							yylval.p=(char *)malloc(7);
							strcpy(yylval.p,"\\item ");
							return LI_STRT;
						}	
"</li>"|"</LI>"			{	return LI_END;}

{special}				{
							yylval.p=(char *)malloc(yyleng+5);
							if(yytext[0]=='\\' && yyleng==1)
								strcpy(yylval.p,"$\\backslash$ ");
							else
							{
							strcpy(yylval.p,"\\");
							strcat(yylval.p,yytext);
							strcat(yylval.p," ");
							} 
							return SPECIAL;
						}
{gsym1}|{gsym2}|{gsym3}	{
							yylval.p=(char *)malloc(yyleng);	
							char *ch = (char *)malloc(yyleng-2); 
							int i;
							if(yytext[1]=='A')
								strcpy(yylval.p,"A ");
							else if (yytext[1]=='B')
								strcpy(yylval.p,"B ");
							else if (yytext[1]=='E')
								strcpy(yylval.p,"E ");
							else if (yytext[1]=='I')
								strcpy(yylval.p,"E ");
							else if (yytext[1]=='T')
								strcpy(yylval.p,"T ");
							else if (yytext[1]=='R')
								strcpy(yylval.p,"P ");
							else
							{
							for(i=1;i<yyleng-1;i++)
								ch[i-1]=yytext[i];
							strcpy(yylval.p,"$\\");
							strcat(yylval.p,ch);
							strcat(yylval.p,"$ ");
							}
							return GSYMBOLS; 
						}
\n          ;
{word} 					{ 
							yylval.p=(char *)malloc(yyleng);
							strcpy(yylval.p,yytext);
						 	return TEXT;
		 				};

<COMM>. ;

%%	