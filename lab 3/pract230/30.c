#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int **b;
	printf("%ld\n",sizeof(b));

	b=malloc(sizeof(int *)*10);
	for(int i=0;i<10;i++) 
		b[i]=malloc(sizeof(int)*10);
		
	for(int i=0;i<10;i++) {
		for(int k=0; k<10; k++) b[i][k]=i*k;
	}	
	
	for(int i=0;i<10;i++) {
		for(int k=0; k<10; k++) 
			printf ("%d ",b[i][k]);
		printf("\n");
	}	

	for(int i=0;i<10;i++) free(b[i]);
	free(b);

	
/*
	for(int i=0;i<5;i++) b[4-i]=a[i];	
	
	for(int i=0;i<5;i++) {
		for(int k=0; k<6; k++) printf ("%d ",b[i][k]);
		printf("\n");
	}	
	printf("-----------\n");

	for(int i=0;i<5;i++) b[i]=malloc(sizeof(int)*10);

	for(int i=0;i<5;i++) {
		for(int k=0; k<10; k++) b[i][k]=i*k;
	}	

	for(int i=0;i<5;i++) {
		for(int k=0; k<10; k++) printf ("%d ",b[i][k]);
		printf("\n");
	}	
	
	for(int i=0;i<5;i++) free(b[i]);
		
*/	

	
	
/*
	int *a,i;
	a=malloc(10*sizeof(int));
	for(i=0;i<11;i++)a[i]=i*2;
	for(i=0;i<11;i++)printf("%d ",a[i]);
	free(a);
*/
	return 0;
}

