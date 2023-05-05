#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int rows = (n + k - 1) / 7 + 1;
    int cols = 7;

    int days[k];
    for (int i = 0; i < k; i++) {// заполняем массив днями месяца
        days[i] = i + 1;
    }
    for (int i = 1; i < n; i++) {// выводим пустые ячейки для первого дня недели
        printf("   ");
    }
    int day_index = 0; 
    for (int i = n; i <= rows * cols; i++) {
        if (day_index < k) {
            printf("%2d", days[day_index]);
        } else {
            printf("  "); // выводим пустую ячейку для дней, которых нет в месяце
        }
        day_index++;
        if (i % cols == 0) {// если мы достигли конца строки, переходим на следующую строку
            printf("\n");
        } else {
            printf(" ");
        }
        if (day_index >= k) {// если мы достигли конца месяца, прерываем цикл
            break;
        }
    }

    printf("\n");

    return 0;
}

