#include<stdio.h>
main()
{
    int a[500],n,i,max;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("The maximum number is: %d",max);
}
