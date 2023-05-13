//Write a program to find out the max number from given array using function

#include<stdio.h>
int findmax(int number[], int a);  //declaration of function
int main()
{
    int i,size,max; //declaration of variables
    printf("enter the size => "); //taken array size from user
    scanf("%d",&size);
    int number[size];   
    for(i=0;i<size;i++)  // take numbers from user
    {
        printf("enter the number => ");
        scanf("%d",&number[i]);
    }
    max = findmax(number,size);  // function call
    printf("\n The maximum value is => %d",max); //to print maximum value

    return 0;
} 
int findmax(int number[],int a){  // define the function  

    int i,max=number[0];  
    for(i=0;i<a;i++) // to find maximum number
    {
        if(number[i]>max)
        {
            max=number[i];
        }
    }
    return max;
}
