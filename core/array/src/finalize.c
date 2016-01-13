#include <stdlib.h>
#include "word_manage_p.h"

/**************************************
 * finish the word manage
 *************************************/
 void word_finalize(void){
 	int i;
 	/* free the area of memory*/
 	for(i=0; i<num_of_word; i++){
 		free(word_array[i].name);
 	}
 	num_of_word = 0;
 }