// Date 11/10/22

#include <iostream>
using namespace std;

void Insertion(int a[], int n)
{
	int i,j,temp;
	for ( i = 1; i < n; i++)
	{
		temp = a[i];

		for ( j = n - i; j >= 0; j--)
		{
			if (temp < a[j])
				a[j + 1] = a[j];
		}
		a[j+1]=temp;
	}
	for (int i = 0; i < n; i++)
		cout<<i<<" ,";
	
}

void Quick( int a[], n)
{
	if()
}



int main()
{
	int n, z, a[] = {6, 2, 8, 1, 0, 4, 9, 5, 3, 7};
	z = sizeof(a) / sizeof(int);
	cout << "Quick ke liye 1 dabaye\nInsertion ke liye 2 dabaye\nQuick ke liye 3 dabaye\n\nDabao : ";
	cin >> n;
	switch (n)
	{
	case 1:
		Insertion(a,z);
		break;
	case 2:
		Quick(a,z);
		break;
	case 3:
		Quick(a,z);
		break;
	
	default:
		break;
	}
	

	return 0;
	// coded by Tejas
}