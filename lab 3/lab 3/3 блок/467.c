#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MACRO(s1, s2) \
	int i, j, k; \
	k = 0; \
	for (i = 0; (s1)[i] != '\0'; i++) {  \
		for (j = 0; ((s1)[i] != (s2)[j]) && ((s2)[j] != '\0'); j++) {;} \
		if ((s2)[j] == '\0') { \
			if (k == i) {k++; continue;} \
			(s1)[k] = (s1)[i]; k++; \
		} \
	} (s1)[k] = '\0';


void foo(char * s1, char * s2);


int main(int argc, char **argv, char **env)
{
	char * s1 = NULL;
	char * s2 = NULL;
	scanf("%ms", &s1);
	scanf("%ms", &s2);

	MACRO(s1, s2);
	//foo(s1, s2);
	printf("s1: %s\n", s1);

	free(s1);
	free(s2);

	return 0;
}


void foo(char * s1, char * s2)
{
	int i, j, k;
    k = 0;

    for (i = 0; s1[i] != '\0'; i++) { 
        for (j = 0; (s1[i] != s2[j]) && (s2[j] != '\0'); j++) {;}

        if (s2[j] == '\0') {
			if (k == i) {
				k++;
                continue;
            }
			s1[k] = s1[i];
			k++;
		}
		
    }

    s1[k] = '\0';
}





// исрпавить ошибку с длиной
	// for (int i = 0; i < strlen(s1)-1; i++) {
	// 	for (int j = 0; i < strlen(s2)-1; j++) {
	// 		if (s1[i] == s2[j]) {
	// 			for (int k = i; k < strlen(s1)-1; k++) {
	// 				s1[k] = s1[k+1];
	// 			}
	// 		}
	// 	}
	// }