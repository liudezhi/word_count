#include <stdio.h>
#include <stdlib.h>
#include "get_word.h"
#include "word_manage.h"

#define WORD_LEN_MAX (1024)


int main(int argc, char **argv){
	char buf[WORD_LEN_MAX];
	FILE *fp;

	printf("begin\n");

	if(argc ==1){
		fp = stdin;
	}else{
		fp = fopen(argv[1], "r");
		if(fp == NULL){
			fprintf(stderr, "%s:%s can not open.\n",argv[0],argv[1]);
			exit(1);
		}
	}
	/*initialize word manage*/
	word_initialize();
	/*read the file, meantime,add the word*/
	while(get_word(buf, WORD_LEN_MAX, fp)!= EOF){
		add_word(buf);
	}
	/*print times of the word*/
	dump_word(stdout);
	/*end the word manage*/
	word_finalize();

	return 0;
}