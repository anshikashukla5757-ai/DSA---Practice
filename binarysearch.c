#include<stdio.h>
int main()
{
	int n,i,low = 0,high,mid,key,flag = 0;
	printf("Enter the size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements in ascending order:");
	
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
printf("\nEnter the key:");
scanf("%d",&key);
//Applying binary search
low =0;
high =n-1;
while(low<=high)
{
	mid=(low+high)/2;
	if(arr[mid]==key)
	{
		printf("\n key found at index=%d",mid);
		flag = 1;
		break;
	}
	else if(key<arr[mid])	//move to left half
	{
		high=mid-1;
	}
	else
	{
		low= mid +1;
	}
}
	if (flag==0)
{
	printf("\n key does not exist");	
}
return 0;
}
