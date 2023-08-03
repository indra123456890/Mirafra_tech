#include "my.h"

static int st;
extern int pu,it;
void stock(void)
{
	st=1000;
	st=st+pu-it;
	printf("Available stock:%d\n\n",st);
}



