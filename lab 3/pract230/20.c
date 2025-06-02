#include <stdio.h>
void test(){
	static int x=1;
	int y=25;
	printf("%d %d\n",x++,y++);
	printf("%p %p\n",&x,&y);
}

void test2(){
	int s;
	printf("%d\n",s);
	printf("%p\n",&s);
}	

int main(int argc, char **argv)
{
	test2();
	test();
	test2();
	
	return 0;
}

