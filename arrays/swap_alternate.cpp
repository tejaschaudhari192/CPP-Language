// Date 27/10/22

#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
	int i;
	for ( i = 1; i <= size; i++)
		cout<<arr[i]<<", ";
}

int main()
{
	int a[10],n,i,temp,j;
	cout<<"Enter size of array : ";
	cin>>n;

	cout<<"Enter "<<n<<" elements"<<endl;
	for ( i = 1; i <= n; i++)
		cin>>a[i];

	cout<<"Your array : ";
	printarray(a,n);

	

	for ( i=1; i<=n ; i+=2)
	{
		temp = a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}

	cout<<endl<<"Modified array : ";
	for ( i = 1; i <= n; i++)
		cout<<a[i]<<", ";

	return 0;
// coded by Tejas
}