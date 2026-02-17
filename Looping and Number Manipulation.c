#include <stdio.h>

int main() {
    int num ;
    int sum=0,r;
    scanf("%d\n",&num);

    while (num != 0) {
        r=num%10;
        sum=sum+r;
        num = num / 10;
    }

    printf("%d\n", sum);
    return 0;
}
