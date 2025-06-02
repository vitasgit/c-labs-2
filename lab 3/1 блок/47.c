#include <stdio.h>

#define  TREUG(x, y, z) ( ((x) + (y)) > (z) && \
                          ((x) + (z)) > (y) && \
						  ((y) + (z)) > (x) )

#define  OSTR(x, y, z) ( ((x)*(x) + (y)*(y)) > (z)*(z) && \
						((x)*(x) + (z)*(z)) > (y)*(y) && \
						((y)*(y) + (z)*(z)) > (x)*(x) )

int f_treug(float x, float y, float z) {
	return ((x + y) > z && (x + z) > y && (y + z) > x);
}

int f_ostr(float x, float y, float z) {
	return ((x*x + y*y) > z*z && (x*x + z*z) > y*y && (y*y + z*z) > x*x);
}

int main(int argc, char **argv, char **env)
{
	float x, y, z;
	printf("x, y, z: ");
	scanf("%f%f%f", &x, &y, &z);

	if (TREUG(x, y, z)) {
		printf("Треуг существует\n");

		if (OSTR(x, y, z)) {
			printf("Остроугольный\n");
		} else {
			printf("Не остроугольный\n");
		}
	} else {
		printf("Треуг не существует\n");
	}

	printf("\n");
	if (f_treug(x, y, z)) {
		printf("Треуг существует\n");

		if (f_ostr(x, y, z)) {
			printf("Остроугольный\n");
		} else {
			printf("Не остроугольный\n");
		}
	} else {
		printf("Треуг не существует\n");
	}

	return 0;
}