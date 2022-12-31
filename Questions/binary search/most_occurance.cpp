// Date 31/12/22

#include <iostream>
using namespace std;

int firstocc(int a[], int size, int key)
{
	int start = 0, end = size - 1;
	int ans = -1;
	while (start <= end)
	{
		int mid = (end + start) / 2;
		if (key == a[mid])
		{
			ans = mid;
			end = mid - 1;
		}
		else if (key < a[mid])
		{
			end = mid - 1;
		}
		else if (key > a[mid])
			start = mid + 1;

		mid = (end + start) / 2;
	}
	return ans;
}

int lastocc(int a[], int size, int key)
{
	int start = 0, end = size - 1;
	int ans = -1;
	int mid = (end + start) / 2;

	while (start <= end)
	{
		
		if (key == a[mid])
		{
			ans = mid;
			start = mid + 1;
		}
		else if (key < a[mid])
			end = mid - 1;
		else if (key > a[mid])
			start = mid + 1;

		mid = (end + start) / 2;
	}
	return ans;
}

int main()
{
	int n;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(a) / sizeof(int);
	cout << "size of array is " << size << endl;
	cout << "Enter Value : ";
	cin >> n;

	cout << firstocc(a, size, n) << endl;
	cout << lastocc(a, size, n) << endl;

	return 0;
	// coded by Tejas
}