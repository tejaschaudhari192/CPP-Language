// Date 27/10/22

/*Simplified Seletion sort*/

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

int Selectionsort(int arr[], int size)
{
	int i, j;

	for (i = 0; i < (size - 1); i++)
	{
		small_index = smallest()
		for (j = i + 1; j < size; j++)
		{
			if (arr[small_index] > arr[j])
				swap(arr[i], arr[j]);

		}
	}
		
			
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

	a[n] = Selectionsort(a, n);
	cout << endl
		 << "Sorted Array : ";
	printarray(a, n);

	return 0;
	// coded by Tejas
}