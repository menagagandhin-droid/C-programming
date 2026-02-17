#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
int x, y, result;
    scanf("%d %d",&x, &y);
    result=add(x,y);
    printf("sum=%d",result);
}
