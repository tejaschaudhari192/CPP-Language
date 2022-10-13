// Date 10/10/22

#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter Value : ";
    cin>>n;

    for ( i = 1; i <= n; i++)
    {

        j=1;
        while (j<=n-i+1)
        {
            cout<<j;
            j++;
        }

        j=1;
        while (j<i)
        {
            cout<<"*";
            j++;
        }

        j=1;
        while (j<i)
        {
            cout<<"*";
            j++;
        }

        j=n-i+1;
        while (j>=1)
        {
            cout<<j;
            j--;
        }
        
        
        
        cout<<endl;
        
        
    }
    
    return 0;

// coded by Tejas
}

