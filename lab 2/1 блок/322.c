#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{   
    int m, n, sumDiv, maxSumDiv, num;

    printf("диапазон от M до N: ");
    scanf("%d%d", &m, &n);

    maxSumDiv = 0;
    for (m; m <= n; m++) {
        
        sumDiv = 0;
        for (int i = 1; i <= (int)sqrt(m); i++) {
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
