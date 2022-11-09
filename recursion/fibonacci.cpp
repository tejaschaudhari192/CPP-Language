 // Date 11/10/22

#include<iostream>
using namespace std;

int fib(int n)
{
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else
		return (fib(n-1)+fib(n-2));
		
}

int main()
{
	int n;
	cout<<"Enter Value upto : ";
	cin>>n;

	for (int i = 0; i < n; i++)
		cout<<fib(i)<<endl;

	return 0;
// coded by Tejas
}