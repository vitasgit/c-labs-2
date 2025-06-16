#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{   
    int x, y, z, t, n, sqrt_n;

    scanf("%d", &n);
    sqrt_n = sqrt(n);
    
    for (x = 1; x <= sqrt_n; x++) {
        for (y = 1; y <= sqrt_n; y++) {
            for (z = 1; z <= sqrt_n; z++) {
                for (t = 1; t <= sqrt_n; t++) {
                    if  ((x != y) &&
                        (x != z) &&
                        (x != t) &&
                        (y != z) &&
                        (y != t) &&
                        (z != t))
                    {
                        if (n == (x*x + y*y + z*z + t*t)) {
                            printf("%4d %4d %4d %4d = %d\n", x, y, z, t, n);
                        }    
                    }
                }
            }
        }
    }



	return 0;
}
