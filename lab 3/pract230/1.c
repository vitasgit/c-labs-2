
#include <stdio.h>

int main(int argc, char **argv)
{
	signed char a;
	unsigned char a1;
	
	int x;
	short int y;
	long int z;
	short x1;
	long y1;
	long long int z1;
	printf("%ld %ld %ld %ld %ld %ld %ld %ld ",
		sizeof(a),
		sizeof(a1),
		sizeof(x),
		sizeof(y),
		sizeof(z),
		sizeof(x1),
		sizeof(y1),
		sizeof(z1)
	);	
	return 0;
}

