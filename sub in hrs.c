#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("Enter the first value in hours & minutes:");
    scanf("%d%d",&a,&b);
    printf("Enter the second value in hours & minutes:");
    scanf("%d%d",&c,&d);
    e=a-c;
    f=b-d;
    printf("%d hours %d minutes",e,f);
}
