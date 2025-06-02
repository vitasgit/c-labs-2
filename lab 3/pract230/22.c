#include <stdio.h>

int x=1;

int main(int argc, char **argv)
{
	printf("%d %p\n",x,&x);	
	int x=10;
	printf("%d %p\n",x,&x);	
	{
		int x=20;
		printf("%d %p\n",x,&x);	
		{
			int x=30;
			printf("%d %p\n",x,&x);	
		}
		printf("%d %p\n",x,&x);	
	}
	printf("%d %p\n",x,&x);	
	printf("%lu\n",0x7ffddb78090c);
	return 0;
}

