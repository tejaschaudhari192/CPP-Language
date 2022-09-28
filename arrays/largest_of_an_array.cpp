// 
#include<iostream>
using namespace std;

int main()
{
    int a[100],size,i,min=0;
    cout<<"Enter size of an array :";
    cin>>size;
    for ( i = 1; i <= size ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>a[i];
    }

    for ( i = 1; i <= size; i++)
    {
        if (min<a[i])
        {
            min=a[i];
        }
        
    }

    // system("cls");

    cout<<"\n\nBiggest element of an array is "<<min;
    
    return 0;

// coded by tejas
}

