#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any 2 numbers : ");
    scanf("%d %d",&num1,&num2);
    if (num1>num2){
        printf("1st number would be greater than 2nd .");
    }
    else if(num2>num1){
        printf("2nd number is greater than 1st .");
    }
    else{
        printf("Both the numbers are equal i.e. is %d",num1);
    }
}
