// Date 29/10/22

#include <iostream>
using namespace std;

int Getarray(int arr[], int size)
{
	cout << "Enter " << size << " elements" << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	return arr[size];
}

void printarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
}

int main()
{
	int n, i, a[100], smalls, b[100];
	cout << "Enter size of array : ";
	cin >> n;

	a[n] = Getarray(a, n);

	for (i = 0; i < n; i++)
	{
		smalls = 0;
		for (int j = 0; j < n; j++)
			if (a[i] > a[j])
				smalls++;

		b[i] = smalls;
	}

	cout << "Your array : ";
	printarray(a, n);
	cout << endl
		 << "That array : ";
	printarray(b, n);

	return 0;
// coded by Tejas
}