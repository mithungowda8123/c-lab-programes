#include<stdio.h>
int main()
{ 
	int n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("enter the marks");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{ 
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}	
	printf("the sorted element are...\n");	
	for(int i=0;i<n;i++)
	{
		
		printf("%d ",a[i]);
	}
	printf("\n");
	int key;
	printf("enter key");
	scanf("%d",&key);
	int f=0;
	int l=n-1;
	while(f<=1)
	{
		int mid=(f+l)/2;
		if(a[mid]==key)
		{
			printf("%d is found at location %d\n",key,mid+1);return 0;
		}
			
	
		
		else if(key>a[mid])
		{
			f=mid+1;
		}
		else
		{
			l=mid-1;
		}
	}
		printf("key is not found");
		return 0;
   
}	
