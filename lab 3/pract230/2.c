
#include <stdio.h>

int main(int argc, char **argv)
{
	signed char a=0;
	unsigned char a1=0;
	printf("%d %d\n", a>=0, a1>=0);
	a--;
	a1--;
	printf("%d %d\n", a>=0, a1>=0);
	a=127;
	a1=127;
	printf("%d %d\n", a>=0, a1>=0);
	a++;
	a1++;
	printf("%d %d\n", a>=0, a1>=0);

	printf("%hhu\n", a);
	
	return 0;
}

