// Date 5/10/22


/*
Sample Outputs

Enter Value : 3
1 2 3 
4 5 6
7 8 9

Enter Value : 5
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j,count;
    cout<<"Enter Value : ";
    cin>>n;

    j=1;
    while (i<=n)
    {
        count=1;
        while (count<=n)
        {
            cout<<j<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

