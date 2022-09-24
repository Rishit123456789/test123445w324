#include<stdio.h>
int main()
{
    char alpha;
    printf(" Enter the alphabets to be checked   :   ");
    scanf("%c",&alpha);
    if (alpha>96 && alpha<123){
        printf("THE CHARACTER IS A LOWERCASE ");
    }
    else if(alpha>64 && alpha<91){
        printf("THE CHARACTER IS A UPPERCASE ");
    }
}
