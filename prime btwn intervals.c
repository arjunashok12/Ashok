#include<stdio.h>
main()
{
    int a,b,i,j,f;
    printf("Enter the limit:");
    scanf("%d%d",&a,&b);
    for(j=a;j<=b;j++)
    {
     f=0;
     for(i=2;i<=j/2;++i)
     {
        if(j%i==0)
        {
            f=1;
            break;
        }
     }
     if(f==0&&j!=1)
     printf("%d\n",j);
    }
}
