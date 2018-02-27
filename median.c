#include<stdio.h>
void main()
{
    int n,a[1000],i,j,b,c,e;
    float d,f;
    printf("Enter the number of terms:");
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
    c=n/2;
    if(n%2!=0)
    {
        printf("\nThe median element is :%d",a[c]);
    }
    else
    {
        e=c-1;
        f=(a[c]+a[e]);
        d=f/2;
        printf("\nThe median element is :%f",d);
    }
}
