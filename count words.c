#include<stdio.h>
main()
{
    int b=0,i,c=0;
    char a[1000];
    printf("Enter the string:");
    scanf("%[^\n]",&a);
    for(i=0;a[i]!='\0';i++)
    {
     if(a[i]==' ')
     b++;
     }
    printf("Number of words:%d",b+1);
}
