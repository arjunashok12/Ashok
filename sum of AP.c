#include<stdio.h>
main()
{
    int a,n,d,i,j,k;
    printf("Enter the value for a,n,d in arithmetic progression:");
    scanf("%d%d%d",&a,&n,&d);
    i=a+((n-1)*d);
    k=n*(a+i);
    j=k/2;
    printf("The sum is : %d",j);
}
