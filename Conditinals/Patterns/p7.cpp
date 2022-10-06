// Date 5/10/22


/*
Sample Outputs
Enter Value : 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
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
        while (count<=i)
        {
            cout<<j<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

