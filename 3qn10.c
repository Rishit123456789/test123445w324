#include<stdio.h>
int main()
{
    int cp,sp;
    float per1,per2;
    printf("Enter the Cost Price :  ");
    scanf("%d",&cp);
    printf("Enter the Selling Price :  ");
    scanf("%d",&sp);
    per1=(sp-cp)*100/(cp);
    per2=((cp-sp)*100/(cp));
    if (sp>cp){
        printf("The profit is %f ",per1);
    }
    else if (cp>sp){
        printf("The loss is %f ",per2);
    }
    else{
        printf("Neither profit nor loss ");
    }
}
