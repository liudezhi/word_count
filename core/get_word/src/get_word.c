#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int get_word(char *buf, int buf_size, FILE *fp){
	int len;
	char ch;

	/*skip blank character*/
	while((ch = getc(fp)) != EOF && !isalnum(ch))
		;
	if(ch == EOF)
		return EOF;

	/* now, ch is first character of the word .*/
	len = 0;
	do{
		buf[len] = ch;
		len ++;
		if(len >= buf_size){
			/* word's lenth is too long, print error*/
			fprintf(stderr, "word too long\n");
			exit(1);
		}
	}while((ch = getc(fp)) != EOF && isalnum(ch));
	buf[len] = '\0';

	return len;
}
