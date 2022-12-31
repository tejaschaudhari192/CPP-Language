// Date 04/08/22

#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cout << "Enter Value : ";
	cin >> n;

	for (int i = 1; i < (n/2 + 1); i++)
		if (n % i == 0)
			sum += i;

	if (sum == n)
		cout << "yes";
	else
		cout << "no";

	return 0;
	// coded by Tejas
}