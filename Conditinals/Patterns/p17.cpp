// Date 7/10/22

/*
Sample Outputs
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
    int n,i=1,j,k;
    char ch='A';
     cout<<"Enter Value : ";
    cin>>n;
    
    while (i<=n)
    {
        j=1;
        ch='A'+n-i;
        while (j<=i)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }


        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}