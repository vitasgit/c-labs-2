#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{   
    int n, sumDiv, num;

    printf("число N: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {

        sumDiv = 0;
        for (int i = 1; i <= (int)sqrt(num); i++) {
            if (num % i == 0) {
                sumDiv += i;

                // парный делитель
                if (((num / i) != i) && ((num / i) != num)) {
                    sumDiv += num / i;
                }
            }
        }

        if (sumDiv == num) {
            printf("%d\n", num);
        }
    }


	return 0;
}
