// Date 29/10/22

#include <iostream>
using namespace std;
void printer(int n)
{
	if (n == 0)
		return;

	cout << n << endl;
	printer(n - 1);
9

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