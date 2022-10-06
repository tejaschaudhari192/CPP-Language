// Date 5/10/22


/*
Sample Output
12345
12345
12345
12345
12345
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j;
    cin>>n;
    while (i<=n)
    {
        j=1;
        while (j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

