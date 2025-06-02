
#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned char x=5;
	x+=10; // x=x+10
	int y=(x+=3);
	int b,c,d;
	int a=(b=(c=(d=1)));
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d %d %d %d\n",a,b,c,d);
	

	return 0;
}

