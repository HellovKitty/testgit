#include<stdio.h>

union test{
	int i;
	char c;
};

void main()
{
	union test t;
	t.i=0x1234;
	
	printf("%x\n",t.c);
}
