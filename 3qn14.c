#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the number :  ");
    scanf("%d",&num);
    if (num%7==0){
        printf("The number is divisible by 7");
    }
    else if(num%3==0){
        printf("The number is divisible by 3");
    }
    else{
        printf("Neither is divisible 7 and divisible by 3.");
    }
}
