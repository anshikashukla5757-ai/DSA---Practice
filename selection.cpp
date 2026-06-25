#include<iostream>
using namespace std;
	int main(){
	int i,n,j;
	int arr[100];
	cout<<"Enter size n:"<<endl;
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(i=0;i<n;i++){
	cin>>arr[i];
}
for(i=0;i<n-1;i++){
	int min=i;
	for(j=i+1;j<n;j++)
	{if(arr[j]<arr[min])
	{min =j;
	}
	}	int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
}cout<<"SORTED ARRAY:"<<endl;
for(i=0;i<n-1;i++){
cout<<arr[i]<<",";}
return 0;
}
