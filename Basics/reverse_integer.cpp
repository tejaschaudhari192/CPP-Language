// Date 11/10/22

#include<iostream>
using namespace std;

int main()
{
	int n,rem,ans=0;
	cout<<"Enter Value : ";
	cin>>n;

	for (int i = 0; n!=0; i++)
	{
		rem=n%10;
		ans=ans*10 + rem;
		n=n/10;
	}
	cout<<ans;
	
	return 0;
// coded by Tejas
}