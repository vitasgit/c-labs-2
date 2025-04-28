#include <stdio.h>

int main(int argc, char **argv, char **env)
{
	float x, y, z;
	float eps = 0.00001;

    printf("x, y, z: ");
	scanf("%f%f%f", &x, &y, &z);

	if ((x + y) > z && (x + z) > y && (y + z) > x) {
		printf("треугольник существует\n");

		if ((x*x + y*y) > z*z && (x*x + z*z) > y*y && (y*y + z*z) > x*x) {
			printf("остроугольный\n");
		}
	} else {
		printf("треугольник не существует\n");
	}

	return 0;
}