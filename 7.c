#include <stdio.h>

int main(){
    int n,count_pol=0,count_min=0,count_nul=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)//Мы считываем число и проверяем больше ли оно нуля если да то прибовляем к count для положительных и так для каждого условия 1
    {
        int x;
        scanf("%d",&x);
        if (x>0)
        {
            count_pol++;
        }else if (x==0)
        {
            count_nul++;
        }else
        {
            count_min++;
        }
        
        
        
    }
    printf("%d %d %d\n",count_nul,count_pol,count_min);
    return 0;
}