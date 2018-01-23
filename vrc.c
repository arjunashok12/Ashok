#include<stdio.h>
void main()
{
    char i;
    printf("Enter an alphabet:\n");
    scanf("%c",&i);
    if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
    printf("%c is a vowel",i);
    else
    printf("%c is a consonant",i);
}
