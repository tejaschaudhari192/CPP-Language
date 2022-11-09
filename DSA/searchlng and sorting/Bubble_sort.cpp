// Date 28/10/22

/*
*Simplified Bubble sort*
*/

#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << ", ";
}

int Getarray(int arr[], int size)
{
	cout << "Enter " << size << " elements" << endl;

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	return arr[size];
}

int Bubblesort(int arr[], int size)
{
	int i, j;

	for (i = 1; i < size; i++) // for size-1 passes
		for (j = 0; j < size-i; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
	
	return arr[size];
}

int main()
{
	int n, a[100];
	cout << "Enter size of array : ";
	cin >> n;

	a[n] = Getarray(a, n);
	cout << endl
		 << "Your Array : ";
	printarray(a, n);

	a[n] = Bubblesort(a, n);
	cout << endl
		 << "\nSorted Array : ";
	printarray(a, n);

	return 0;
	// coded by Tejas
}