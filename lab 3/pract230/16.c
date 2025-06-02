#include <stdio.h>
int i=0;

void test(){
	printf("%d\n",i++);
	test();
}

int main(int argc, char **argv)
{
	test();
	return 0;
}

