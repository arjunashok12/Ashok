#include<stdio.h>
void main()
{
    int a[1000],i,j,n,k,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the number:");
    scanf("%d",&a[i]);
    }
    printf("Enter the number of terms to get sum:");
    scanf("%d",&j);
    for(k=0;k<j;k++)
    sum=sum+a[k];
    printf("The sum of %d numbers is:%d",j,sum);

}
