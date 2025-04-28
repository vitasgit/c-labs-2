#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char string [20];

    scanf("%s", string);

    for (i=0; i< strlen(string); i++)
    {
        if (string[i] != string [strlen(string)-1 - i])
        {
            printf("Not a palindrome String");
            return 0;
        }

    }

    printf("Palindrome String");
    return 0;

}