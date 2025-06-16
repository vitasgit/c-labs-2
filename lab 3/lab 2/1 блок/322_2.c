#include <stdio.h>
#include <math.h>
// 56 - 7
// 7 8 

int main()
{
    int m, n, sumDiv, maxSumDiv, num;
    double eps = 0.001;
    
    printf("диапазон от M до N: ");
    scanf("%d %d", &m, &n);

    maxSumDiv = 0;
    for (m; m <= n; m++) {
        
	int sumDiv = 0;
	double sqrt_m = sqrt(m);
        for (int i = 1; (i < sqrt_m) || (fabs(sqrt_m - i) < eps); i++) {
            if (m % i == 0) {
                sumDiv += i;
                
		// парный делитель
                if ((m / i) != i) {
                    sumDiv += m / i;
                }
            }
        }
	
	printf("m=%d %d\n", m, sumDiv);
        if (sumDiv > maxSumDiv) {
            maxSumDiv = sumDiv;
            num = m;
        }
    }

    printf("%d\n", num);
    return 0;
}