#include<stdio.h>
int main()
{
    int a,b,c;
    float dsct;
    printf("Enter the value of a :   ");
    scanf("%d",&a);
    printf("Enter the value of b :   ");
    scanf("%d",&b);
    printf("Enter the value of c :   ");
    scanf("%d",&c);
    dsct=(b*b)-(4*a*c);
    if (dsct>0){
        printf("It is real and distinct .");
    }
    else if(dsct<0){
        printf("It is imaginary root .");
    }
    else{
        printf("It is real and equal roots.");
    }
}
