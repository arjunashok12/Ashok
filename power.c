#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("The result of %d^%d is %d:",a,b,c);
}
