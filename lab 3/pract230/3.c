
#include <stdio.h>

int main(int argc, char **argv)
{
	float x;
	double y;
	long double z;
	
	printf("%ld %ld %ld \n",
		sizeof(x),
		sizeof(y),
		sizeof(z)
	);	
	return 0;
}

