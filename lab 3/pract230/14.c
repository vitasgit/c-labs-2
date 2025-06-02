
#include <stdio.h>

int main(int argc, char **argv)
{

	int i;

	do {
		printf ("Введите отрицательное значение: ");
		scanf("%d",&i);
	}
	while (i>=0);	
	
	printf ("i = %d",i);

	return 0;
}

