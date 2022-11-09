// Date 11/10/22

#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
	int i;
	for ( i = 0; i < size; i++)
		cout<<arr[i]<<", ";
}

int getarray(int arr[], int size)
{
	int i;
	for ( i = 0; i < size; i++)
		cin>>arr[i];
	
	return arr[size];
}

int main()
{
	int n,a[20],b[20],s1=0,s2=0;
	cout<<"Enter size of array : ";
	cin>>n;

	a[n]=getarray(a,n);
	printarray(a,n);



	for (int i = 0; i < n; i++)
	{
		s1=s1+a[i];
	}

	for (int i = 0; i < n-1; i++)
	{
		s2=s2+(i+1);
	}

	cout<<endl<<"Duplicate element : "<<(s1-s2);

	return 0;
// coded by Tejas
}