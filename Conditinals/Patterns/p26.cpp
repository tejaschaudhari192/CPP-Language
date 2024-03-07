// Date 8/10/22

/* Sample Output
Enter Value : 5
     E
    D E
   C D E
  B C D E
 A B C D E
                                                    */
#include<iostream>
using namespace std;

int main()
{
	int n;
	char ch;
	cout<<"Enter Value : ";
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		for (int s = 1; s < n-i+1; s++)
			cout<<" ";
	
		ch='A'+n-i-1;
		for (int j = 0; j < i+1 ; j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	return 0;
// coded by Tejas
}