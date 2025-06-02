#include <stdio.h>
void test(){
	static int x=1;
	int y=1;
	printf("%d %d\n",x++,y++);
	printf("%p %p\n",&x,&y);
}

void test2(){
	test();
}	

int main(int argc, char **argv)
{
	test();
	test();
	test();
	test2();
	test2();
	test2();
	
	return 0;
}

