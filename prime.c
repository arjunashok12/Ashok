#include<stdio.h>
main()
{
    int a,i,f=0;
    printf("Enter an integer:");
    scanf("%d",&a);
    for(i=2;i<=a/2;++i)
    {
        if(a%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    printf("%d is a prime number",a);
    else
    printf("%d is not a prime number",a);
}
