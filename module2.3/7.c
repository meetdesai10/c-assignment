#include<stdio.h>
int main()
{
    char name[100];
    int count=0;
    printf("enter you name=>");
    scanf("%s",name);
    
    while(name[count] !='\0')
    {
        count++;
    }printf("size of string is => %d",count);

    return 0;
}