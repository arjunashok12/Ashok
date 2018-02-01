#include<stdio.h>
void main()
{
    int a,i,count=0;
    printf("Enter the integer:");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
    a=a/10;
    }
    printf("The number of digits in given integer is %d",i);
}
