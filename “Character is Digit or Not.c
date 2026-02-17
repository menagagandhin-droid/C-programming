#include <stdio.h>

int main()
{
    char ch;
   
    scanf("%c", &ch);
   
    if(ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Not Digit");
    }
   
    return 0;
}
