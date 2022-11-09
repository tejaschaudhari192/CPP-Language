// Date 11/10/22

#include<iostream>
using namespace std;

int main()
{
	int n;
	char ch;
	cout<<"Enter Value : ";
	cin>>n;

	for (int l = 1; l <= n; l++)
	{
		ch='A';
		
		for (int i = 1; i <= n-l+1; i++)
			cout<<" ";
		for (int i = 1; i <= l; i++,ch++)
			cout<<ch;
		for (int i = 1; i <= l-1; i++,ch--)
			cout<<ch;
		
		cout<<endl;
	}
	
	
	

	return 0;
// coded by Tejas
}