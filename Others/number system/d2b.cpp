// Date 02/01/23

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, bit, ans = 0, i = 0, a[10], j,bkp;
	cout << "Enter Value : ";
	cin >> n;

	bkp=n;
	cout<<"\napproach 1"<<endl;
	for (int i = 0; n != 0; i++)
	{
		bit=n%2;
		cout<<bit;
		n=n/2;
	}
	cout<<endl;
	n=bkp;
	n=~n;
	n*=-1;
	cout<<n;
	// exit(0);



	return 0;
	// coded by Tejas
}