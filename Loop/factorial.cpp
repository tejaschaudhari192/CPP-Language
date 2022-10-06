// 

#include<iostream>
using namespace std;

int main()
{
    double fact=1;
    int n,sum=1;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    
    cout<<fact<<endl<<n;
    return 0;

// coded by Tejas
}

