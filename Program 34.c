#include<stdio.h>
#include<math.h>

int main()
{
    float P, R, T;
    float A, CI;
    printf("Enter Principal: ");
    scanf("%f", &P);
    printf("Enter Rate: ");
    scanf("%f", &R);
    printf("Enter Time: ");
    scanf("%f", &T);
    A = P * pow((1 + R/100), T);
    CI = A - P;
    printf("Compound Interest = %.2f", CI);


}
