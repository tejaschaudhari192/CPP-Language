// Date --/--/23

#include<iostream>
using namespace std;

int main()
{
	int n, bit, ans = 0, i = 0, a[10], j,bkp;
	cout << "Enter Value : ";
	cin >> n;

	bkp=n;

	cout<<"\nIn Binary : "<<endl;
	for (int i = 0; n != 0; i++)
	{
		bit = n & 1;
		cout<<bit;
		n = n >> 1;
	}

	return 0;
// coded by Tejas
}