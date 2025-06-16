#include <stdio.h>
#include <stdlib.h>

#define MACRO(s, pos) \
	for (int i = pos; (s)[i] != '\0'; i++) { \
		if ((s)[i] == '1') {(s)[i] = '0'; continue;} \
		if ((s)[i] == '0') {(s)[i] = '1';} \
	}


void foo(char * s, int pos);

int main(int argc, char **argv, char **env)
{
	char * s = NULL;
	scanf("%ms", &s);


	int pos;
	scanf("%d", &pos);

	MACRO(s, pos);
	//foo(s, pos);

	printf("%s\n", s);
	free(s);

	return 0;
}


void foo(char * s, int pos) {
	for (int i = pos; s[i] != '\0'; i++) {
		if (s[i] == '1') {
			s[i] = '0';
			continue;
		}
		if (s[i] == '0') {s[i] = '1';}
	}
}