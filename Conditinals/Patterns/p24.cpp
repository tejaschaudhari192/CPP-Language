// Date 11/10/22


/*Sample output :
Enter Value : 5
     *****
    *****
   *****
  *****
 *****
 				*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter Value : ";
	cin>>n;

	for (int i = 1;i <= n; i++)
	{
		for (int j = 1; j <= n-i+1; j++)
			cout<<" ";

		for (int i = 1; i <= n; i++)
			cout<<"*";
		
		cout<<endl;
	}
	
	return 0;
// coded by Tejas
}