#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MACRO(s, n) \
if (n <= strlen(s)) exit(1); \
char buff_s[100] = ""; \
strcpy(buff_s, (s)); \
char * words[10]; \
char * pb; \
pb = strtok(buff_s, " "); \
int i = 0; \
while (pb != NULL) { \
    words[i] = pb; \
    pb = strtok(NULL, " "); \
    i++; \
} \
int count_word = i; \
if (count_word == 1) { \
       (s)[0] = '\0'; \
       int space = n - strlen(words[0]); \
       for (int i = 0; i < space; i++) { \
           strcat(s, " "); \
       } \
       strcat(s, words[0]); \
	return; \
    } \
if (count_word <= 1) exit(1); \
int prom = count_word - 1; \
int count_chars = 0; \
for (int i = 0; i < count_word; i++) {count_chars += strlen(words[i]);} \
int count_spaces = n - count_chars; \
int prom_space = count_spaces / prom; \
int lost_space = count_spaces % prom; \
(s)[0] = '\0'; \
for (int i = 0; i < count_word; i++) { \
    strcat(s, words[i]); \
    if (i < count_word-1) { \
        for (int j = 0; j < prom_space + (lost_space > 0); j++) {strcat(s, " ");} \
        if (lost_space > 0) lost_space--; \
    } \
}



void foo(char * s, int n);


int main(int argc, char **argv, char **env)
{

    char s[100] = "";
    fgets(s, 100, stdin);
    char * p = strchr(s, '\n');
    *p = '\0';

    int n;
    scanf("%d", &n);

    MACRO(s, n);
    //foo(s, n);

    printf("s = %s\n", s);
    printf("len = %zu\n", strlen(s));

	
	return 0;
}


void foo(char * s, int n)
{
    if (n <= strlen(s)) return;

    char buff_s[100] = "";
    strcpy(buff_s, s);

	char * words[10];
    char * pb;

    pb = strtok(buff_s, " ");
    int i = 0;
    while (pb != NULL) {
        words[i] = pb;
        pb = strtok(NULL, " ");
        i++;
    }
    int count_word = i;
    if (count_word <= 1) return;

    // массив слов
    // for (int i = 0; i < count_word; i++) {
    //     printf("%s\n", words[i]);
    // }

    // промежутки между словами
    int prom = count_word - 1;

    int count_chars = 0;
    for (int i = 0; i < count_word; i++) {
        count_chars += strlen(words[i]);
    }

    int count_spaces = n - count_chars;
    int prom_space = count_spaces / prom;
    int lost_space = count_spaces % prom;
    printf("prom_space = %d\n", prom_space);
    printf("lost_space = %d\n", lost_space);
    
    s[0] = '\0';
    for (int i = 0; i < count_word; i++) {
        strcat(s, words[i]);

        if (i < count_word-1) {
            for (int j = 0; j < prom_space + (lost_space > 0); j++) { 
                strcat(s, " ");
            }
            if (lost_space > 0) lost_space--;
        }
    }

    printf("s = %s\n", s);
    printf("len = %zu\n", strlen(s));
}
