#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number a,b and c ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("The number a is greater .");
    }
    else if(b>a && b>c){
        printf("The number b is greater .");
    }
    else{
        printf("The number c is greater .");
    }
}
