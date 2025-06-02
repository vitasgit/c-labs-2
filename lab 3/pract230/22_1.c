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

		{
			int z;
			printf("z - %d %p\n",z,&z);	
		}
		printf("%d %p\n",x,&x);	

	}
	printf("%d %p\n",x,&x);	
	return 0;
}

