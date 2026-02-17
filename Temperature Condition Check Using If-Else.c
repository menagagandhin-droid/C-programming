
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=45)
    {
    printf("Heat Alert");
    }
    else if(a>=35 && a<=44)
    {
        printf("%Hot");
    }
    else if(a>=20 && a<=34)
    {
        printf("Normal");
    }
    else
    {
        printf("Cold");
    }
}
