// Date 5/10/22


/*
Sample Outputs
Enter Value : 5
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 
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
        count=i;
        while (count<=n)
        {
            cout<<i<<" ";
            count++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

