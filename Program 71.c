#include<stdio.h>
int main(){
    int seatnumber;
    printf("Enter a seat number:");
    scanf("%d",&seatnumber);
    if(seatnumber>=1&&seatnumber<=20){
        printf("Available");
    }
    else if(seatnumber>=21&&seatnumber<=35){
        printf("Reserved");
    }
    else if(seatnumber>=36&&seatnumber<=50){
        printf("Occupied");
    }
    else{
        printf("Invalid");
    }
}
