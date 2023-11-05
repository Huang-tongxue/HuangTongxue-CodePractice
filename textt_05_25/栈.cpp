#include"ջ.h"
void STInit(ST* st)
{
	assert(st);
	st->a = NULL;
	st->top = 0;
	int capacity = 0;
}

void STDestroy(ST* st)
{
	assert(st);
	st->a = NULL;
	st->capacity = st->top = 0;
	free(st);
}