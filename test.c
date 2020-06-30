#include<stdio.h>

union test{
	int i;
	char c;
};

int main()
{
	union test t;
	t.i=0x1234;
	
	printf("%x\n",t.c);
	return 0;
}
