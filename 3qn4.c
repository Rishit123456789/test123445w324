#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :    ");
    scanf("%d",&num);
    if (num&1==0)
    {
        printf("The number would be odd number. ");
    }
    else{
        printf("The number would be even number. ");
    }
}
/* There is a property -
1) Odd number - its last digit has 1  .
2) Even number - its last digit has 0  .
3) The number 1 is 00000000000000000000001.
4) So the we will do and operator .
*/
