#include<stdio.h>
main()
{
    int a,b,r,d,c,i;
    printf("Enter the limit:");
    scanf("%d%d",&a,&c);
    for(i=a;i<=c;i++)
    {
     d=0;
     b=i;
     while(b!=0)
     {
        r=b%10;
        d=d+(r*r*r);
        b=b/10;
     }
     if(d==i)
     {
        printf("%d",d);
     }
    }
   
}

