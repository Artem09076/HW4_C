#include <stdio.h>
void decToBinary(int n)
{
    int binaryNum[32];
    for (int i = 0; i < 32; i++) {// инициализируем массив
        binaryNum[i] = 0;
    }
    int i = 0;
    if (n < 0) {// если число отрицательное, добавляем минус в ответ и инвертируем число
        printf("-");
        n = ~n + 1;
    }

    while (n > 0) {// конвертируем десятичное число в двоичное
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)// выводим  двоичное представление в обратном порядке
        printf("%d", binaryNum[j]);
    printf("\n");
}


int main()
{
    int n;
    scanf("%d", &n);

    decToBinary(n);

    return 0;
}
