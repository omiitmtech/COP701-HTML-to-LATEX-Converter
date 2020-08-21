# HTML-to-LATEX-Converter
It's a HTML to LATEX converter developed in Flex and Bison for the subject COP-701 SOFTWARE SYSTEMS LABORATORY. It takes a, HTML webpage as an input and converts it into an equivalent LATEX document which further can be run to convert into pdf document.


# Technologies
Tools: Flex, Bison <br/>
Programming Language: C

# Flex Analyser (P7.l)
It's lexical analyzer developed in FLEX which scans the input file and generates token for each valid lexeme. It generates token an sends tokens
to parser for parsing.

# Parser (P7.y)
It's a LALR parser that contains all the production rules. It recieves tokens from lexical analyser and forms a parse tree if the iputted
grammar is a valid as per the grammar rules.

# Commands to Run:
<b>Compilation :</b> <br/>
bison -d P7.y <br/>
flex P7.l <br/>
gcc -o P7 P7.tab.c lex.yy.c P7.c </br>

<b>How to Run? </b>
./P7 sample.html output.tex
<br/>
(or)
<br/>
./ run.sh sample.html output.tex
