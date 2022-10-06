// Date 5/10/22


/*
Sample Outputs
Enter Value : 5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j,count;
    cout<<"Enter Value : ";
    cin>>n;


    while (i<=n)
    {
        count=1;
        while (count<=i)
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

