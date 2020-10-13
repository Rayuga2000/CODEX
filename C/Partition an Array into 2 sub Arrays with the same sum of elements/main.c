#include<stdio.h>

int main()
{
	int i,j,temp,n,sum1,sum2;

	printf("Enter size of Array: ");
	scanf("%d",&n);

	int arr[n];

	printf("Enter the Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		sum1=0;
		for(j=0;j<i;j++)
		{
			sum1+=arr[j];
		}

		sum2=0;
		for(j=i;j<n;j++)
		{
			sum2+=arr[j];
		}

		if(sum1==sum2)
		{
			printf("The sub-arrays are: { ");
			for(j=0;j<i;j++)
			{
				printf("%d ",arr[j]);
			}
			printf("} and { ");
			for(j=i;j<n;j++)
			{
				printf("%d ",arr[j]);
			}
			printf("}");
		}
		else if(i==n-1)
		{
			printf("The sub-arrays are: ");
			printf("{ %d %d }",arr[0],arr[i]);
			printf(" and {");
			for(j=1;j<n-1;j++)
			{
				printf(" %d",arr[j]);
			}
			printf(" }\n");
		}
	}

	return(0);
}