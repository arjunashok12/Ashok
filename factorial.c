#include<stdio.h>
main()
{
    int a,i,f=1;
    printf("Enter an integer:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    f=f*i;
    printf("The factorial of %d is %d",a,f);
}
    
