#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *a,i;
	a=malloc(10*sizeof(int));
	for(i=0;i<11;i++)a[i]=i*2;
	for(i=0;i<11;i++)printf("%d ",a[i]);
	free(a);
	return 0;
}

