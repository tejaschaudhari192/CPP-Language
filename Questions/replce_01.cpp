// Date 11/10/22

#include <iostream>
#include<string.h>
using namespace std;


int main()
{
	int n, rem;
	cout << "Enter Value : ";
	cin >> n;

	for (int i = 0; n != 0; i++)
	{
		rem = n % 10;
		// cout << rem <<endl;
		if (rem == 1)
			cout << 0;
		else
			cout << 1;

		n = n / 10;
	}
	

	return 0;
	// coded by Tejas
}