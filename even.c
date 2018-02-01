#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter the limit:");
    scanf("%d%d",&a,&b);
    for(i=a;a<=b;a++)
    {
    if(a%2==0)
    printf("\n%d",a);
    }
}
