// Date 6/10/22

/*
Sample Outputs
Enter Value : 5
1
21
321
4321
54321
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j,k;
    cout<<"Enter Value : ";
    cin>>n;
    
    while (i<=n)
    {
        j=1;

        while (j<=i)
        {
            cout<<i-j+1<<" ";
            j++;
        }

        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

