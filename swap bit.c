#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swaping:%d %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swaping:%d %d",a,b);
}
