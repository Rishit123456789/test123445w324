#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number :   ");
    scanf("%d",&month);
    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ){
        printf("The month has 31 days .");
    }
    else if(month==4 || month==6 || month==9 || month==11){
        printf("The month has 30 days .");
    }
    else{
        printf("The month has 28 days . ");
    }
}
