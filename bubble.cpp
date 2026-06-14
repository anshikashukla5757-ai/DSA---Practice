#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n)
	{
	for(int i=0;i<n-1;i++)
	{
	for(int j=0;j<n-i-1;j++)
	{
	if(arr[j+1]<arr[j])
	{
		int temp= arr[j];
		arr[j]= arr[j+1];
		arr[j+1]= temp;
	}}}}
int main(){
int n,i,j,temp;

cout<<"Enter the size:";
cin>>n;
int arr[n];
cout<<"Enter the array elements:";
for( i=0;i<n;i++)
{cin>>arr[i];
}
bubbleSort(arr,n);
cout<<"sorted array";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
