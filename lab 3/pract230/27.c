#include <stdio.h>



int main(int argc, char **argv)
{
	long x=10;
	long *ip=&x;
	printf("%p\n",ip);
	x=*(ip++);
	printf("%ld\n",x);
	printf("%p\n",ip);		

	return 0;
}

