#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5;
    printf("Enter the marks 1 out of 100 :  ");
    scanf("%d",&num1);
    printf("Enter the marks 2 out of 100 :  ");
    scanf("%d",&num2);
    printf("Enter the marks 3 out of 100 :  ");
    scanf("%d",&num3);
    printf("Enter the marks 4 out of 100 :  ");
    scanf("%d",&num4);
    printf("Enter the marks 5 out of 100 :  ");
    scanf("%d",&num5);
    if (num1>33 && num2>33 && num3>33 && num4>33 && num5>33){
        printf("The students is passed . CONGRATS   !!!!!!! ");
    }
    else{
        printf("The students is failed . BETTER LUCK NEXT TIME ");
    }
}
