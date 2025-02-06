#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{   
    int n, i, digit, curr_num, sum;
    int start, end;

    printf("Введите n: ");
    scanf("%d", &n);

    start = pow(10, n-1);
    end = pow(10, n) - 1;
    for (i = start; i <= end; i++) {
        curr_num = i;
        sum = 0;

        while (curr_num > 0) {
            digit = curr_num % 10;
            sum += pow(digit, n);
            curr_num /= 10;
            
            next_num = curr_num % 10;
            if (next_num) {

            }
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}