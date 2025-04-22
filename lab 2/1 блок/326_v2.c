#include <stdio.h>
#include <stdbool.h>
#include <time.h> // Для измерения времени

int main() {
    long n, i, j;
    bool found;
    clock_t start = clock(); // Запоминаем время старта

    for (n = 2; ; n++) {
        found = false;
        for (i = 1; i < n; i++) {
            for (j = i + 1; j <= n; j++) {
                if (i*i*i + j*j*j == n) {
                    if (found) {
                        printf("%ld = %ld^3 + %ld^3\n", n, i, j);
                        
                        // Замер времени перед завершением
                        clock_t end = clock();
                        double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
                        printf("Время выполнения: %.3f секунд\n", time_spent);
                        
                        return 0;
                    } else {
                        //printf("%ld = %ld^3 + %ld^3\n", n, i, j);
                        found = true;
                    }
                }
            }
        }
    }

    // Если число не найдено (маловероятно)
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Время выполнения: %.3f секунд\n", time_spent);
    
    return 0;
}