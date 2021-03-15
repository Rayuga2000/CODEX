#include<stdio.h>

void rotate(int arr[],int d,int n)
{
	int i,j,temp;

	for(i=0;i<d;i++)
	{
		temp=arr[0];
		for(j=0;j<n-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[j]=temp;
	}
}

int main()
{
	int i,n,d;

	printf("Enter size of array: ");
	scanf("%d",&n);

	int arr[n];

	printf("Enter elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("By how many elements you want to rotate the Array?: ");
	scanf("%d",&d);

	rotate(arr,d,n);

	printf("New Array is==> ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return(0);
}