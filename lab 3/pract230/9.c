
#include <stdio.h>

int main(int argc, char **argv)
{
	int x=5;
	int y=12;
	printf("%d\n",x&&y);
	printf("%d\n",x&y);
	printf("%d\n",x^y);
	printf("%d\n",x>>1);
	printf("%d\n",x<<1);
	printf("%d\n",x<<2);
	printf("%d\n",x<<3);
	printf("%d\n",~x);
	
	// 5 == 0101
	//12 == 1100
	//		0100
	//		1001
	
	return 0;
}

