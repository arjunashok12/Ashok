#include<stdio.h>
main()
{
    int a[500],n,i,max,min;
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
    for(i=0;i<n;i++)
    {
        if(a[i]<max)
        min=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("The minimum number is: %d",min);
}
