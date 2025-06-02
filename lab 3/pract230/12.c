
#include <stdio.h>

int main(int argc, char **argv)
{
	if ("") printf ("неноль");
	else printf ("ноль");
	
	printf ("\n%p\n","");

	int *p;
	
	if (p) printf ("неноль");
	else printf ("ноль");
	
	printf ("\n%p\n",p);

	return 0;
}

