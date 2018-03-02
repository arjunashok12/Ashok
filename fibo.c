#include<stdio.h>
main()
{
    int a=-1,b=1,c,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
}
