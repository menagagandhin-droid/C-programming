#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check validity
    if(a + b > c && b + c > a && a + c > b)
    {
        printf("Valid Triangle\n");
        if(a == b && b == c)
            printf("Equilateral Triangle");
        else if(a == b || b == c || a == c)
            printf("Isosceles Triangle");
        else
            printf("Scalene Triangle");
    }
    else
    {
        printf("Not a Valid Triangle");
    }

    return 0;
}
