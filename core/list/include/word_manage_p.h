#ifndef WORD_MANAGE_P_H_INCLUDED
#define WORD_MANAGE_P_H_INCLUDED

#include "word_manage.h"

typedef struct Word_tag{
	char *name;
	int count;
	struct Word_tag *next;
} Word_T;

extern Word_T *word_header;


#endif /* WORD_MANAGE_P_H_INCLUDED */
