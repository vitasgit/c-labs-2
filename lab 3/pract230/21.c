#include <stdio.h>
int test(register int x, register int y, register int z){
	int k=7;
	int test3(int x1, int y1, int z1){
		return x+y+z+x1+y1+z1+k;
	}	
	return x+y+z+test3(z,y,z);
}


int main(int argc, char **argv)
{
	test(10,20,30);
//	test2(10,20,30);	
	return 0;
}

