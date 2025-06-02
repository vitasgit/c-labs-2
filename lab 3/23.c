#include <stdio.h>

#define MAX(A, B) ((A) > (B) ? (A) : (B))
int max(int a, int b) { if (a>b) return a ; else return b; }

int main(int argc, char **argv)
{
	int x=10;
	int y=20;	
	printf("%d\n",MAX(x++,y++));
	printf("%d %d\n",x,y);

	x=10;
	y=20;	
	printf("%d\n",max(x++,y++));
	printf("%d %d\n",x,y);
	
	
	return 0;
}

