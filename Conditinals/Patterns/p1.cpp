// Date 5/10/22


/*
Sample Output
* 
* *
* * *
* * * *
* * * * *
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
        while (j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

