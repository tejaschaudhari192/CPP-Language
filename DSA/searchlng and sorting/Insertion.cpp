// Date 11/10/22

#include<iostream>
using namespace std;

int main()
{
    int n,a[100],i,j,temp;
    cout<<"Enter Size of list : ";
    cin>>n;

    cout<<"Enter "<<n<<" Integers : "<<endl;
    for ( i = 0; i < n; i++)
        cin>>a[i];

    cout<<"\nYour list : "<<endl;
    for ( i = 0; i < n; i++)
        cout<<a[i]<<", ";

    for ( i = 1; i < n; i++)
    {
        temp= a[i];
        j=i-1;

        while (temp<a[j] && j>= 0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    
    cout<<"\nSorted list : "<<endl;
    for ( i = 0; i < n; i++)
        cout<<a[i]<<", ";


    return 0;
// coded by Tejas
}