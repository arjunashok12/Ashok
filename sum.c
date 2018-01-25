#include<stdio.h>
void main()
{
    int sum=0,n,i;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    sum=sum+i;
    printf("The sum of %d numbers is:%d",n,sum);
}
