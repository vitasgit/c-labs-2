
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char **argv)
{
	printf("%.20lf\n",FLT_EPSILON);	
	printf("%.20lf\n",DBL_EPSILON);
	printf("%d\n",FLT_DIG);
	printf("%d\n",DBL_DIG);
	printf("%d\n",LDBL_DIG);
	printf("%le\n",FLT_MAX);	
	printf("%le\n",FLT_MIN);	
	printf("%le\n",DBL_MAX);
	printf("%le\n",DBL_MIN);
	printf("%Le\n",LDBL_MAX);
	printf("%Le\n",LDBL_MIN);
		
	return 0;
}

