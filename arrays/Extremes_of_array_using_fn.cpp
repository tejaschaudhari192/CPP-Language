// Date 11/10/22

#include<iostream>
using namespace std;

int max(int a[], int n)
{
	int max=INT16_MIN,i;
	for ( i = 1; i <= n; i++)
		if (max<a[i])
			max=a[i];

	return max;
}

int min(int a[], int n)
{
	int min=INT16_MAX,i;
	for ( i = 1; i <= n; i++)
		if (min>a[i])
			min=a[i];

	return min;
}
int main()
{
	int largest,n,i,a[10];
	cout<<"How many elements ? : ";
	cin>>n;
	//array input
	for ( i = 1; i <= n; i++)
	{
		cout<<"Enter element "<<i<<" : ";
		cin>>a[i];
	}

	//array output
	cout<<"\nYour array : ";
	for ( i = 1; i <= n; i++)
		cout <<a[i]<<", ";

	
	cout<<"\n\nLargest : "<<max(a,n)<<"\tSmallest : "<<min(a,n);

	return 0;
// coded by Tejas
}