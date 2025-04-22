#include <stdio.h>
#include <math.h>
// 56 - 7
// 7 8 
// 49

int main(int argc, char **argv)
{   
    int m, n, sumDiv, maxSumDiv, num;
    double eps = 0.001;

    printf("диапазон от M до N: ");
    scanf("%d%d", &m, &n);

    maxSumDiv = 0;
    for (int i = m; m <= n; m++) {
	    
        sumDiv = 0;
        double sqrt_m = sqrt(m);
        for (int i = 1; i < sqrt_m || fabs(sqrt_m - i) < eps; i++) {
            if (m % i == 0) {
                    sumDiv += i;

                // парный делитель
                if ((m / i) != i) {
                    sumDiv += m / i;
                }
            }
        }
        
        if (sumDiv > maxSumDiv) {
            maxSumDiv = sumDiv;
            num = m;
        }
    }
    printf("число: %d\n", num);

    return 0;
}
