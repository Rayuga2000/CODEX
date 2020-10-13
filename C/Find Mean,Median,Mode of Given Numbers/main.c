#include<stdio.h>

int belongsTo(int i,int arr[])
{
	int j=0;

	for(j=i-1;j>=0;j--)
	{
		if(arr[i]==arr[j])
		{
			return(1);
		}
	}
	return(0);
}

void mean(int arr[],int n)
{
	int i,j,sum=0;

	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}

	printf("Mean is: %d\n",(sum/n));
}

void median(int arr[],int n)
{
	int i,j,temp;

	for (i=0;i<n;i++)
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

	if(n%2==0)
	{
		printf("Medians are: %.2f\n",(float)(arr[n/2]+arr[(n/2-1)])/2);
	}
	else
	{
		printf("Median is: %d\n",arr[(n/2)]);
	}
}

void mode(int arr[],int n)
{
	int i,j,c=0;

	for(i=0;i<n;i++)
	{
		if(i==0 || belongsTo(i,arr)!=1)
		{
			for(j=i;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					c++;
				}
			}
			printf("%d appeared %d times...\n",arr[i],c);
			c=0;
		}
	}
}

int main()
{
    int i,n;

    printf("Enter the size of Array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    mean(arr,n);
    median(arr,n);
    mode(arr,n);

    return(0);
}