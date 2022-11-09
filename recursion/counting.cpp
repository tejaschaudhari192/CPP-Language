// Date 29/10/22

#include <iostream>
using namespace std;
void printer(int n)
{
	if (n == 0)
		return;

	printer(n - 1);
	cout << n << endl;
}

int main()
{
	int n;
	cout << "Enter Value : ";
	cin >> n;

	printer(n);

	return 0;
// coded by Tejas
}