#include <stdio.h>



int main(int argc, char **argv)
{
	int x=1,y=2,z[10];	
	int *ip;
	ip = &x;
	printf("%d\n",*ip);
//	y=*ip;
	ip++;
	printf("%d\n",y);
	printf("%p %p %p\n",&x,&y,ip);
	printf("%d\n",*ip);
	

	ip=&z[0];
	*ip=125;
	printf("%d\n",z[0]);
	ip++;
	*ip=300;
	printf("%d\n",z[1]);
	*(ip+1)=500;
	printf("%d\n",z[2]);
	printf("%d\n",*ip);
	z[3]=111;
	printf("%d\n",*(ip+2));
	ip=z;
	printf("%d\n",*ip);
	printf("%d\n",*(z+1));
	printf("%d\n",ip[2]);
	//z++;
	
	
	
	
	
	

	return 0;
}

