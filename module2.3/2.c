/* WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)*/

#include<stdio.h>
int main()
{

    int num;
    float ans,number1,number2; // declaration of variables
    calculater: // goto statement
    printf("press 1.addition\npress 2.subsraction\npress 3.multiplication\npress 4.dvision\n");//take value from user
    scanf("%d",&num);
    printf("enter the number 1 =>");
    scanf("%f",&number1);
    printf("enter the number 2 => ");
    scanf("%f",&number2);
    switch (num) 
    {
    case  1:
        ans=number1+number2;// formula of addition
        printf("total is => %f",ans);
        break;
    case  2:
        ans=number1-number2; // formula of subsraction
        printf("total is => %f",ans);
        break;
    case  3:
        ans=number1*number2; // formula of multiplication
        printf("total is => %f",ans);
        break;
    case  4:
        ans=number1/number2;// formula of division
        printf("total is => %f",ans);
        break;
    
    default:
        printf("please enter number between 1 to 4\n");
        goto calculater;
    }
    return 0;

}