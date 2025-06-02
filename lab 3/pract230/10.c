
#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned char x=5;
	int pos=2;
	// 5 == 0101
	//		0100
	printf("%d\n",x&(1<<pos));
	printf("%d\n",(x>>pos)%2);
	// 5 == 0101
	//		0010
	pos=1;
	printf("%d\n",x|(1<<pos));
	pos=2;
	printf("%d\n",x|(1<<pos));
	// 5 == 0101
	//		1011
	//		0100
	pos=2;
	printf("%d\n",x&~(1<<pos));
	pos=3;
	printf("%d\n",x&~(1<<pos));
	
	return 0;
}

