#include <stdio.h>



int main(int argc, char **argv)
{
	void *ip;
	long x=10;
	ip = &x;
	printf("%ld\n",*(long *)ip);
	*(double *)ip=1.3;
	printf("%ld\n",x);
	printf("%lf\n",*(double *)ip);
		

	return 0;
}

