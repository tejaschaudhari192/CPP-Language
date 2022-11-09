// Date 25/10/22

#include<iostream>
using namespace std;

bool present(int a[],int n,int value)
{
	for (int i = 0; i < n; i++)
		if(a[i]==value)
			return 1;
	return 0;
			
	
}

int main()
{
	int i,n=10,value,result;
	int a[10]={1,2,3,4,5,6,7,8,9,0};

	cout<<"Enter value to search : ";
	cin>>value;
	result = present(a,n,value);
	
	if (result )
		cout<<"yes";
	else
		cout<<"no";

	return 0;
// coded by Tejas
}