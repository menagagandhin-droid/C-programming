#include<stdio.h>
int main ()
{
    int exp;
    float salary, bonus;
    scanf("%d",&exp);
    scanf("%f",&salary, &bonus);
    if(exp>=10)
    {
        bonus=salary*0.20;
    }
    else if(exp>=5 && exp<=9)
    {
        bonus=salary*0.10;
    }
    else
    {
        bonus=0;
    }
    printf("bonus:%.0f\n",bonus);
}
