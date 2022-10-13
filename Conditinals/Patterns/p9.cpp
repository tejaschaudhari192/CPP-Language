// Date 6/10/22

/*
Sample Outputs
Enter Value : 5
1
23
345
4567
56789
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
        j=i;
        count=1;
        while (count<=i)
        {
           cout<<j<<" 6";
           j++;
           count++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;

// coded by Tejas
}

