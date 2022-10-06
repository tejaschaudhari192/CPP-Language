// Date 5/10/22


/*
Sample Output
54321
54321
54321
54321
54321
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j;
    cout<<"Enter Value : ";
    cin>>n;
    while (i<=n)
    {
        j=n;
        while (j>=1)
        {
            cout<<j<<"\n";
            j--;
        }
        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

