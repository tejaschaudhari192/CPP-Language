// Date 11/10/22

#include<iostream>
using namespace std;

int main()
{
	int n,a[100]={0},x=0,y=0;
	printf("Enter Value lenth of array : ");
	scanf("%d",&n);

	printf("Enter array elements\n");
	for (int i = 1; i < n; i++)
		scanf("%d",&a[i]);
	
	for (int i = 1; i <= n ; i++)
	{
		x = x+a[i];
		y = y+i;
	}

	printf("\n\nMissing = ",y-x);

	return 0;
// coded by Tejas
}