#include<stdio.h>

int main()
{
	int i,j,n,t,temp;

	printf("Enter size of array: ");
	scanf("%d",&n);

	int arr[n];

	printf("Enter elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("How many times you want to rotate the Array?: ");
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		temp=arr[0];
		for(j=0;j<n-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[j]=temp;
	}

	printf("New Array is==> ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	return(0);
}