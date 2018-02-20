#include<stdio.h>
void main()
{
    int n,a[1000],i,j,b;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("The sorted order is:");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
