#include<stdio.h>
main()
{
    int a,b,r,d=0;
    printf("Enter an integer:");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        r=a%10;
        d=d+(r*r*r);
        a=a/10;
    }
    if(b==d)
    {
        printf("%d is an armsrtong number",b);
    }
    else
    {
        printf("%d is not an armstrong number",b);
    }

}
