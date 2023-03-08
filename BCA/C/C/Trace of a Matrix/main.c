#include<stdio.h>

int main()
{
    int n,i,j,s=0;

    printf("Enter the row and column: ");
    scanf("%d",&n);
    int mat[n][n];//Trace of a matrix is always for square matrix

    printf("Enter the Data: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        s+=mat[i][i];
    }

    printf("Trace of the Matrix is: %d\n",s);

    return 0;
}