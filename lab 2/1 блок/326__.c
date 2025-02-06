#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    int num, x1, y1, x2, y2, sum1, sum2;

    for (x1 = 2; ; x1++) {
        for (y1 = 1; y1 < x1; y1++) {
            sum1 = x1*x1*x1 + y1*y1*y1;

            for (x2 = x1; x2 < 100; x2++) {  // или (x2 = 1; x2 < x1; x2++)
                for (y2 = 1; y2 < x2; y2++) {
                    sum2 = x2*x2*x2 + y2*y2*y2;

                    if ((sum1 == sum2) && ((x1 != x2) || (y1 != y2))) {
                        printf("%d\n", sum1);
                    }
                }
            }
        }
    }



    // (int)pow(2,3)
    return 0;
}
