
#include <stdio.h>

int main(int argc, char **argv)
{

	char j;
	char i;
	
	for (i=0,j=0;i+j<10;i++,j--) printf ("%d ",i+j);
	
/*
	int x,y,z;
//	x=(y=5,z=y+25);
	y=5; z=y+25; x=z;
	
	printf ("%d",x);
*/
	return 0;
}

