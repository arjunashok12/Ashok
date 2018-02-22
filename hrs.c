#include<stdio.h>
void main()
{
    int a;
    printf("Enter the time in minutes:");
    scanf("%d",&a);
    printf("%d hours %d minutes",a/60,a%60);
}
