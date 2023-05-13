/* WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array*/

#include<stdio.h>
int main()
{
    int i,j,a[2][2], b[2][2], ans[2][2]; // declaration of variables and array
    printf("---enter the elemetns of frist matrix---\n");
    for(i=0;i<2;i++) // take value of the frist value from user
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i] [j]);
        }
    }
    printf("---enter the elements of second matric---\n");
    for(i=0;i<2;i++) // take value of second matrix from user
    {

        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i] [j]);
        }
    }

    for(i=0;i<2;i++) //print frist matrix
    {

        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i] [j]);
        }
    }
    printf("\n");
    for(i=0;i<2;i++) // print second matrix
    {

        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i] [j]);
        }

    }
    
    for(i=0;i<2;i++) // addition of matrix
    {
        for(j=0;j<2;j++)
        {
            ans[i][j]=a[i][j] + b[i] [j];

        }
    }
    printf("\n---addition of the matrix---\n");
    for(i=0;i<2;i++) // to print addition matrix
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",ans[i][j]);
        }
    }
     for(i=0;i<2;i++) // substraction of the matrix
    {
        for(j=0;j<2;j++)
        {
            ans[i][j]=a[i][j] - b[i] [j];

        }
    }
    printf("\n---subsraction of the matrix---\n");
    for(i=0;i<2;i++) // printf of substraction matrix
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",ans[i][j]);
        }
    }
     for(i=0;i<2;i++) // multiplication of the matrix
    {
        for(j=0;j<2;j++)
        {
            ans[i][j]=a[i][j] * b[i] [j];

        }
    }
    printf("\n---miltiplication of the matrix---\n");
    for(i=0;i<2;i++) // to print multiplication matrix
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",ans[i][j]);
        }
    }

    return 0;
}