#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char **argv)
{   
    int j, i, n, m, sumDiv1, sumDiv2, k;
    bool find = false;

    printf("Введите n, m: ");
    scanf("%d%d", &n, &m);

    for (j = n; j <= m; j++) {
        // поиск делителей для первого числа
        sumDiv1 = 0;
        for (i = 1; i <= (int)sqrt(j); i++) {
            if (j % i == 0) {
                sumDiv1 += i;

                // парный делитель, с исключением самого числа
                if ( ((j / i) != i) && ((j / i) != j) ) {
                    sumDiv1 += (j / i);
                }
            }
        }

        // поиск пары
        for (k = j+1; k <= m; k++) {
            if (k > sumDiv1) {break;}
            
            sumDiv2 = 0;
            for (i = 1; i <= (int)sqrt(k); i++) {
                if (k % i == 0) {
                    sumDiv2 += i;

                    // парный делитель, с исключением самого числа
                    if ( ((k / i) != i) && ((k / i) != k) ) {
                        sumDiv2 += (k / i);
                    }
                }
            }

            if ((sumDiv1 == k) && (sumDiv2 == j)) {
                printf("j=%4d, k=%4d\n", j, k);
                printf("sumDiv1=%4d, sumDiv2=%4d\n\n", sumDiv1, sumDiv2);
                
                find = true;
            }
        }
    }

    if (!find) {printf("0\n");}

    return 0;
}