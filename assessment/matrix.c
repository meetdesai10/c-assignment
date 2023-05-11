#include<stdio.h>
int main()
{
    int i,j,k,a[2][2],b[2][2],ans[2][2]; // declaration of variables
    printf("enter the elements of matrix a\n");

    for(i=0;i<2;i++) // take value of frist matrx from user
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]); // strore value in array
        }
    }
     printf("enter the elements of matrix b\n");

    for(i=0;i<2;i++) // take vlaue of the second matrix from user
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]); // to store value in array
        }
    }
    for(i=0;i<2;i++) 
    {
        for(j=0;j<2;j++)
        {
            ans[i][j]=0;
        }
    }
     
    for(i=0;i<2;i++)  // multilication of matrixs
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
            ans[i][j]+=a[i][k]*b[k][j]; // formula of multiplication
            }
        }
    }
    printf("---Frist matrix---\n"); // To print frist matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",a[i][j]);
        }printf("\n");
    }
    printf("---Second matrix---\n"); // To print second matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d  ",b[i][j]);
        }printf("\n");
    }
    printf("---multiplication---\n"); // To print multiplication of the matrixs
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",ans[i][j]);
        }printf("\n");
    }
}