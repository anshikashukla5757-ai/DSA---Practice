#include<iostream>
using namespace std;
int main(){
	int n,i;
	int arr[100];
	cout<<"Enter the size n:"<<endl;
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int start=0;				//5,4,8,7,6
	int end=n-1;				//0,1,2,3,4
								//6,4,8,7,6	temp=5
	while(start<end)
	{	int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	for(i=0;i<n;i++){
	cout<<arr[i]<<",";}
	return 0;
}
