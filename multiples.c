#include<stdio.h>
main()
{
    int a,b,i;
    printf("Enter an integer:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    b=i*a;
    printf("%d ",b);
    }
}


