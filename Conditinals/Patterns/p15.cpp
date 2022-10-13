// Date 7/10/22

/*
Sample Outputs
Enter Value : 5
A 
B C 
C D E 
D E F G 
E F G H I 
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
        ch='A'+i-1;
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