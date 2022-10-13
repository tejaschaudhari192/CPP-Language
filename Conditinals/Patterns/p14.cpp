// Date 7/10/22

/*
Sample Outputs
Enter Value : 5
A 
A B 
A B C 
A B C D 
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
        ch='A';
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

 