// Date 04/01/23

#include <iostream>
using namespace std;
int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	int n, sum = 0, ep,i;

	cout << "Enter end : ";
	cin >> ep;
	for ( i = 0; i <= ep; i++)
	{
		sum = 0;
		int bkp = i;
		for (; i != 0; i = i / 10){
			if ( i == 0)
				break;
			sum += factorial(i % 10);

		}
		if (sum == bkp)
			cout << sum << endl;
		i = bkp;
	}

	return 0;
	// coded by Tejas
}
