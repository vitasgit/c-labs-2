#include <stdio.h>

void test(int k){
	k++;
	printf("%d\n",k);
}

void test2(char k[]){
	printf("%p\n",k);
	k[0]='!';
	printf("%s\n",k);
}

char z1[]="HELLO";

int main(int argc, char **argv)
{
	int x=10;	
	test(x);
	printf("%d\n",x);
	
	char z[]="HELLO";
	test2(z);
	printf("%s\n",z);

	test2(z1);
	printf("%s\n",z1);

	test2("HELLO");
	printf("%s\n",z);

	
	return 0;
}

