#include<stdio.h>
int main()
{
	int n,i,beg,end,mid,flag=0,key;
	printf("Enter the size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements in ascending order:");
	scanf("%d",&arr[n]);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
printf("\nEnter the key:");
scanf("%d",key);
//Applying binary search
beg =0;
end =n-1;
while(beg<=end)
{
	mid=(beg+end)/2;
	if(arr[mid]==key)
	{
		printf("\n key found at index=%d",mid);
		flag = 1;
		break;
	}
	else if(key<arr[mid])	//move to left half
	{
		end=mid-1;
	}
	else
	{
		beg= mid +1;
	}
}
	if (flag==0)
{
	printf("\n key does not exist");	
}
return 0;
}
