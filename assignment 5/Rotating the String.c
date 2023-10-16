//Write a program to rotate the string
#include<stdio.h>
#include<string.h>

int main()
{
    // left rotation
    char s[50];
    printf("Enter String");
    scanf("%s",&s);
    int x;
    x=strlen(s);//contains length
   for(int i=0;i<x;i++)
    {
        for(int j=i;j<x;j++)//shifting elements one by one 
        {
            printf("%c",s[j]);
        }
        for(int k = 0;k<i;k++)//adding the left character at the end 
        printf("%c",s[k]);
        printf("\n");
    }
}
