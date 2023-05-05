#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {//Мы считываем число и проверяем больше ли оно нуля если да то прибовляем к count 1
        int x;
        scanf("%d", &x);
        if (x > 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
