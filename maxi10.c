#include<stdio.h>
main()
{
    int a[500],i,max=0;
    printf("Enter the values:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("The maximum number is: %d",max);
}
