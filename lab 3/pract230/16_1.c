#include <stdio.h>

void test(long long i, long long k){
	int a[i][k];
	printf("%lld %lld\n",i,k);
	test(i+1,k+1);
}

int main(int argc, char **argv)
{
	test(0,0);
	return 0;
}

