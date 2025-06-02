#include <stdio.h>

#define PAL(a) ( (a[0]) == (a[3]) && (a[1]) == (a[2]) )

int f_pal(char * a) {
    //printf("fa = %s\n", a);
    return (a[0] == a[3] && a[1] == a[2]);
}

int main()
{
    char a[5];
    scanf("%4s", a);

    if (PAL(a)) {printf("Палиндром\n");} 
    else {printf("Не палиндром\n");}

    int x = f_pal(a);  // переадем адрес на начало массива
    // int x = f_pal(&a[0]);
    printf("x = %d", x);

    

    return 0;
}


// char a[5];
//     scanf("%4s", a);
    
//     if (a[0] == a[3] && a[1] == a[2]) 
//         printf("%s - Палиндром\n", a);
//     else
//         printf("%s Не палиндром\n", a);

// for (int i = 0; a[i] != '\0'; i++) {
//     if (a[i] != a[len-1-i]) {
//         printf("%s Не палиндром\n", a);
//         return 0;
//     }
// }