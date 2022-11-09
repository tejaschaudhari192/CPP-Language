// Date 11/10/22

#include<iostream>
using namespace std;

int factorial(int n)
{
	int fact;
	if (n==0)
		return 1;

	fact=n*factorial(n-1);

	return fact;
}

int main()
{
	int n,fact;
	cout<<"Enter Value : ";
	cin>>n;
	fact=factorial(n);
	cout<<fact;

	return 0;
// coded by Tejas
}