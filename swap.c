#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swaping:%d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swaping:%d %d",a,b);
}
