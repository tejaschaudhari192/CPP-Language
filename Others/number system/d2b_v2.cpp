
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, bit, ans = 0, i = 0, a[10], j, bkp;
	cout << "Enter Value : ";
	cin >> n;
	bkp = n;
	for (int i = 0; n != 0; i++)
	{
		bit = n % 10;
		if (bit == 1)
			ans += pow(2, i);
		n = n / 10;
	}
	cout << ans;

	return 0;
	// coded by Tejas
}