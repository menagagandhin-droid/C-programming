#include<stdio.h>

int main()
{
    int n1, n2;
    int product, result;

    scanf("%d %d", &n1, &n2);

    product = n1 * n2;

    if(product % 2 == 0)
    {
        result = product / 2;
    }
    else
    {
        result = product / 3;
    }

    printf("%d", result);

    return 0;
}
