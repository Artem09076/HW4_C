#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[15];
    int i, len, has_lower=0, has_upper=0, has_digit=0, has_other=0,count=0;
    scanf("%s", password);
    len = strlen(password);//Проверяем длину пароля 
    if (len < 8 && len > 14) {
        printf("NO\n");
        return 0;
    }
    for (i = 0; i < len; i++) {//Прверяем каждый символ и смотрим его класс и если да то специалььный аргумент становиться равен 1
        if (islower(password[i])) {
            has_lower = 1;
        } else if (isupper(password[i])) {
            has_upper = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else {
            has_other = 1;
        }
    }
      for (int i = 0; i < len; i++)//Проверяем входят ли символы пароля в промежуток таблицы ASCII путём преобразования символа в число таблицы ASCII
      {
        int ascii=password[i];
        if (ascii>=33 && ascii<=126)
        {
           count++; 
        }
        
      }
      if (count<len)
      {
        printf("NO\n");
        return 0;
      }
      
    if (has_lower + has_upper + has_digit + has_other < 3) {//Если суммы признаков наличия классов меньше 3 то пароль не правельный
        printf("NO\n");
        return 0;
    }

    printf("YES\n");
    return 0;
}
