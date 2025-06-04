#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char * s, int n) {
    if (n <= strlen(s)) return;

	char * words[10];
    char * pch;

    pch = strtok(s, " ");  // указатель на перво слово до пробела
    int i = 0;
    while (pch != NULL) {
        // printf("\n%s", pch);
        words[i] = pch;
        pch = strtok(NULL, " ");  // После вызова строка изменяется(разделители заменяются на '\0') NULL чтобы поиск продолжил в оригинальной строке
        i++;
    }
    int count_word = i;
    // printf("words = %d\n", count_word); 
    if (count_word <= 1) return;

    // массив слов
    // for (int i = 0; i < count_word; i++) {
    //     // printf("%s\n", words[i]);
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
    
    char s2[100] = "";
    //strcat(s2, words[0]);

    for (int i = 0; i < count_word; i++) {
        strcat(s2, words[i]);

        if (i < count_word-1) {
            for (int j = 0; j < prom_space + (lost_space > 0); j++) { 
                strcat(s2, " ");
            }
            if (lost_space > 0) lost_space--;
        }
    }

    strcpy(s, s2);
    printf("s = %s\n", s);
    printf("len = %zu\n", strlen(s));
}


int main(int argc, char **argv, char **env)
{

    char s[100] = "";
    // Читает из потока stream и записывает в буфер s строку до '\n', но не более size символов.
	fgets(s, 100, stdin);
    char * p = strchr(s, '\n');  // указатель на символ '\n'
    *p = '\0';

    int n;
    scanf("%d", &n);

    foo(s, n);

	
	return 0;
}
