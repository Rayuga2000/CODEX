#include<stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter the row and column: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the data for [%d%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    int max=arr[0][0];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }

    printf("The array is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Largest number is=> %d\n",max);
}