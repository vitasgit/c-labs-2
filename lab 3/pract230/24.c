#include <stdio.h>

int max(int a, int b) { if (a>b) return a ; else return b; }

typedef unsigned char * pbyte;
int main(int argc, char **argv)
{
	printf("%p %p\n",main,max);
	pbyte x;
	x=(pbyte)max;
	for (int i=0; i<10; i++) printf("%hhu ",x[i]);
	printf("\n");
	x[3]=123;
	printf("\n%d\n",12345);
	
	//printf("\n%d\n",max(10,20));
	return 0;
}

