// Date 11/10/22

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, ans = 0, rem, i = 0;
	cout << "Enter Value : ";
	cin >> n;

	while (n != 0)
	{
		rem = n & 1;
		ans = (rem * pow(10, i)) + ans;
		n = n >> 1;
		i++;
	}

	cout << ans<<"\n"<<i;

	return 0;
	// coded by Tejas
}