// Date 27/10/22

/*
Binary search
time complexity is O(log n)*/

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
	int start, end, mid;
	start = 0, end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2; // if sum is in range of int otherwise use s+(e-s)/2

		if (arr[mid] == key)
			return mid;
		else if (arr[mid] > key)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return -1;
}

int main()
{
	int key, where;
	int a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int s = sizeof(a) / 4;

	cout << s << "Enter Key : ";
	cin >> key;

	where = BinarySearch(a, s, key);

	cout << key << " is fount at index " << where;
	return 0;
// coded by Tejas
}