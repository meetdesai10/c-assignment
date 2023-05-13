// WAP to find reverse of string using recursion


#include<stdio.h>
void reverse(char s[],int i); // declaration of variables

void main(){
    char str[100];
    printf("enter string="); //take value from user
    scanf("%s",&str);
    printf("revers string is=");
    reverse(str,0); //call function

}
void reverse(char s[], int i){ // define function
    if(s[i]=='\0')
    return;
    reverse(s,i+1);
    printf("%c",s[i]);
}