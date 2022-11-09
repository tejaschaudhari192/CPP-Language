// Date 29/10/22

#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
}

int Getarray(int arr[], int size)
{
	cout << "Enter " << size << " elements" << endl;

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	return arr[size];
}

int Insertionsort(int arr[], int size)
{
	int i, j, temp;
	for (i = 1; i < size; i++)
	{
		temp = arr[i];
		// Backup ith element

		for (j = i - 1; j >= 0; j--)
			if (temp < arr[j])
				arr[j + 1] = arr[j];
			else
				break;

		arr[j + 1] = temp;
		// insert after i comparisions
	}
	return arr[size];
}

int main()
{
	int n, a[100];
	cout << "Enter Value : ";
	cin >> n;

	a[n] = Getarray(a, n);
	cout << endl
		 << "Your Array : ";
	printarray(a, n);

	a[n] = Insertionsort(a, n);
	cout << endl
		 << "\nSorted Array : ";
	printarray(a, n);

	return 0;
	// coded by Tejas
}