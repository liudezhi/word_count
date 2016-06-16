#include <stdio.h>
#include "word_manage_p.h"

/*将内存中的单词输出*/
void dump_word(FILE *fp){
	Word_T *pos;

	for(pos=word_header; pos; pos=pos->next){
		fprintf(fp, "%-20s%5d\n",
				pos->name,pos->count );
	}
}