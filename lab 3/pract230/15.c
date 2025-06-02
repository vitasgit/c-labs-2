
#include <stdio.h>

int main(int argc, char **argv)
{

	int i;

/*	do {
		printf ("Введите отрицательное значение: ");
		scanf("%d",&i);
	}
	while (i>=0);	
*/
	int s=0;
	while (1) {
		printf ("\nВведите отрицательное значение, 0 для конца ввода: ");
		scanf("%d",&i);
//		if (i<0) break;	
		if (i>0) continue;
		if (i==0) break;
		s+=i;			
	}
		
	printf ("Сумма введенных i = %d",s);

	return 0;
}

