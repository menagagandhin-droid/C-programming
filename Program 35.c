#include<stdio.h>

int main()
{
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    // Check first number
    if(n1 % 7 == 0 || n1 % 10 == 7)
        printf("%d is a Buzz Number\n", n1);
    else
        printf("%d is not a Buzz Number\n", n1);

    // Check second number
    if(n2 % 7 == 0 || n2 % 10 == 7)
        printf("%d is a Buzz Number\n", n2);
    else
        printf("%d is not a Buzz Number\n", n2);

    return 0;
}
