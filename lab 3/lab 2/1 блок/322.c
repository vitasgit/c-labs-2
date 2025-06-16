#include <stdio.h>
#include <math.h>
// 56 - 7
// 7 8 
int foo(int x) 
{	
	printf("awdawd  %d\n", x);
	return x;
}

int main(int argc, char **argv)
{   
    int m, n, sumDiv, maxSumDiv, num;
    double eps = 0.001;

    printf("диапазон от M до N: ");
    scanf("%d%d", &m, &n);

    maxSumDiv = 0;
    for (m; m <= n; m++) {
	        
        sumDiv = 0;
	double sqrt_m = sqrt(m);
        for (int i = 1; (i < sqrt_m) || (fabs(sqrt_m - foo(i)) < eps); i++) {
	    //printf("i=%d sqrt=%f\n", i, sqrt_m);
	    if (m % i == 0) {
                sumDiv += i;

                // парный делитель
                if ((m / i) != i) {
                    sumDiv += m / i;
                }
            }
        }
        
	//printf("m=%d %d\n", m, sumDiv);
        if (sumDiv > maxSumDiv) {
            maxSumDiv = sumDiv;
            num = m;
        }
    }
    
    printf("число: %d\n", num);
    

    return 0;
}
