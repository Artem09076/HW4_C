#include <stdio.h>

int main() {
    int n, sum = 0, count = 0;
    scanf("%d", &n);
    while (n != 0) {//Мы находим сумму через дабавление к специальной переменной  и каждый раз добавляем 1 к переменной количества числа
        sum += n;
        count++;
        scanf("%d", &n);
    }
    printf("%f\n", (float)sum / count);
    return 0;
}
