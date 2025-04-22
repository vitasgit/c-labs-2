#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    int n, i, digit, next_digit, num, sum;
    int start, end;
    bool flag;

    printf("Введите n: ");
    scanf("%d", &n);

    start = pow(10, n-1);
    end = pow(10, n) - 1;
    for (i = start; i <= end; i++) {
        num = i;
        sum = 0;

        while (num > 0) {
            digit = num % 10;
            sum += pow(digit, n);
            num /= 10;
        }

        if (sum == i) printf("%d\n", i);
    }

    return 0;
}



