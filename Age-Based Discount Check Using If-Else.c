#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if(a<12)
    {
        printf("Child Discount");
    }
    else if(a>=60)
    {
        printf("Senior Discount");
    }
    else
    {
        printf("No Discount");
    }
}
