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

int main()
{
    int i,j,k,l,n,d=0;

    printf("Enter the size of Array: ");
    scanf("%d",&n);

    int arr[n],a[n];

    printf("Enter the Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the range you want to find duplicates: ");
    scanf("%d",&k);

    for(i=0;i<k;i++)
    {
        if(i==0 || belongsTo(i,arr)!=1)
        {
        	for(j=i;j<n;j++)
        	{
        		if(arr[i]==arr[j])
        		{
        			a[d]=j+1;
                    d++;
                }
            }
            if(d>0)
            {
            	printf("%d appeared in position ",arr[i]);
                for(l=0;l<d;l++)
                {
                	printf(" %d",a[l]);
                }
                printf("\n");
                d=0;
            }
        }
    }

    return(0);
}