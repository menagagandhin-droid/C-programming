#include<stdio.h>
int main(){
    int age,tutionfees,annualexpenses;
    int fees;
    scanf("%d%d%d",&age,&tutionfees,&annualexpenses);
    if(age>=18&&age<=25){
        if(tutionfees>annualexpenses){
            printf("tutionfees higher");
        }
    else if(annualexpenses>tutionfees){
        printf("annualfees higher");
    }
    else if(tutionfees==annualexpenses){
        printf("both are equal");
    }
    }
    else{
        printf("Not eligibble");
    }
}
