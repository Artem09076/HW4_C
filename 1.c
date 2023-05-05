#include <stdio.h>
int main(){
    int mounth,year;
    scanf("%d %d",&mounth,&year);
    if ((year%4==0 || year%400==0) && mounth==2 )//В высокосном году количество дней в месяцах столько сколько и не в високосных годах кроме февраля
    {
        printf("%d\n",29);
    }else if (mounth==2)
    {
        printf("%d\n",28);
    }else if (mounth>12)
    {
        printf("NO\n");
    }else if (mounth<8 && mounth%2==0)//Если внимательно посмотреть на календарь то можно увидеть закономерность что первые 7 чётных месяцов количество дней одинакого
    {
        printf("%d\n",30);
    }else if (mounth<8 && mounth%2!=0)
    {
        printf("%d\n",31);
    }else if (mounth>=8 && mounth%2==0)//А с восьмого до конца года колчество дней в чётных и нечётных месяцов меняется 
    {
        printf("%d\n",31);
    }else if (mounth>=8 && mounth%2!=0)
    {
        printf("%d\n",30);
    }
    
    
    
    
    
    
}