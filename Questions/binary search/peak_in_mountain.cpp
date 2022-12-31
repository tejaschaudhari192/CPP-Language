// Date 31/12/22

#include<iostream>
using namespace std;
int Getarray(int arr[], int size)
{
	cout << "Enter " << size << " elements" << endl;

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	return arr[size];
}

int peak(int a[], int size)
{
	int start =0,end=size-1;
	int mid = (start+end)/2;
	while (start<end)
	{
		if (a[mid]<a[mid+1])
			start=mid+1;
		else
			end = mid;

		mid = (start+end)/2;
	}
	return start;	
}
int main()
{
	int n,a[50];
	cout<<"Enter size of array : ";
	cin>>n;
	int size = n;
	cout<<"Enter array elemente :"<<endl;

	for (int i = 0; i < size; i++)
		cin>>a[i];

	
	cout<<"Peak at index "<<peak(a,size);
	return 0;
// coded by Tejas
}