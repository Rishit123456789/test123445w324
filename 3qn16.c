#include<stdio.h>
int main()
{
    char ch_r;
    printf("Enter the character to be checked :  ");
    scanf("%c",&ch_r);
    if (ch_r>96 && ch_r){
        printf("It is lowercase.");
    }
    else if(ch_r>64 && ch_r<91){
        printf("It is uppercase.");
    }
    else if(ch_r>47 && ch_r<58){
        printf("It is number.");
    }
    else{
        printf("It is a special character.");
    }
}
