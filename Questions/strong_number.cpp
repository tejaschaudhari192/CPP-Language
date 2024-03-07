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
	int n, sum = 0;
	cout << "Enter Value : ";
	cin >> n;

	int bkp = n;
	for (; n != 0; n = n / 10)
		sum += factorial(n % 10);
	if (sum == bkp)
		cout << "Yes";

	return 0;
	// coded by Tejas
}
