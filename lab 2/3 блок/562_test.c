#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    int n, i, digit, last_digit, curr_digit, num, sum;
    int start, end;
    bool flag;

    printf("Введите n: ");
    scanf("%d", &n);

    
    start = pow(10, n-1);
    end = pow(10, n) - 1;
    for (i = start; i <= end; i++) {
        num = i;
        sum = 0;

        //last_digit = 0;
        
        // 135
        while (num > 0) {
            last_digit = num % 10;
            next_digit = (num / 10) % 10;
            if (next_digit > last_digit) {
                flag = true;
                break;
            }
            
            sum += pow(last_digit, n);
            num /= 10;

            printf("%d\n", i);
        }

        for (i = num; i <= end; i++) {
            if (sum == i) printf("%d\n", i);
        }

        // if (sum == i) printf("%d\n", i);

    }

    return 0;
}