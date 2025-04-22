#include <stdio.h>

int main(int argc, char **argv)
{   
    int num, x1, y1, x2, y2, sum1, sum2;

    for (x1 = 2; ; x1++) {
        for (y1 = 1; y1 <= x1; y1++) {
            sum1 = x1*x1*x1 + y1*y1*y1;
            
            for (x2 = 2; x2 < x1; x2++) {
                for (y2 = 1; y2 <= x2; y2++) {
                    sum2 = x2*x2*x2 + y2*y2*y2;

                    if ((sum1 == sum2) && ((x1 != x2) || (y1 != y2))) {
                        printf("%d^3 + %d^3 = %d^3 + %d^3 = %d\n", x1, y1, x2, y2, sum1);
                        return 0;
                    }

                    // printf("%d %d | %d %d\n", x1, y1, x2, y2);
                    // if (x1 > 5) return 0;
                }
            }
        }
    }

    /*
    // перебор чисел
    for (x1 = 2; ; x1++) {
        for (y1 = 1; y1 <= x1; y1++) {
            printf("%4d %4d\n", x1, y1);
            // sum1 = x1*x1*x1 + y1*y1*y1;

            if (x1 > 5) return 0;
        }
    }
    */

	return 0;
}
