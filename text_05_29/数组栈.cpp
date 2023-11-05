#include"Õ».h"
void STInit(ST* st)
{
	assert(st);

	st->capacity = 0;
	st->data = NULL;
	st->top = 0;
}

void STDestroy(ST* st)
{
	assert(st);

	st->data = NULL;
	st->capacity = st->top = 0;
	free(st);
}


void STPush(ST* st, SLNData x)
{
	assert(st);

	//ÅÐ¶ÏÊÇ·ñÂúÕ»
	if (st->top == st->capacity)
	{
		int newcapacity = (st->capacity == 0) ? 4 : (st->capacity) * 2;
		SLNData* tem = (SLNData*)realloc(st->data, (sizeof(SLNData) * newcapacity));
		if (tem == NULL)
		{
			perror("realloc failed");
			return;
		}

		st->data = tem;
		st->capacity = newcapacity;
	}

	st->data[st->top] = x;
	st->top++;
}
bool STEmpty(ST* st)
{
	assert(st);
	return st->top == 0;
}

void STPop(ST* st)//·µ»ØÖµÎªÉ¾³ýÇ°Õ»¶¥ÔªËØ
{
	assert(st);
	assert(!STEmpty(st));

	st->top--;
}

int STSize(ST* st)
{
	assert(st);
	return st->top;
}


SLNData STTop(ST* st)
{
	assert(st);
	assert(!STEmpty(st));

	return st->data[st->top - 1];
}