#include<stdio.h>
int main()
{
    int num,n1;
    printf("Enter the number :  ");
    scanf("%d",&num);
    n1=(num/10);
    if (n1>10 && n1<99){
        printf("The number is 3 digit number .  ");
    }
    else{
        printf("The number is not a 3 digit number .");
    }
}
