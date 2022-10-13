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
        k=i;

        while (j<=i)
        {
            cout<<k<<" ";
            k--;
            j++;
        }

        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

