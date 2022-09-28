#include<iostream>
using namespace std;

int main()
{
    int a,*ptr;
    cout<<"Enter number : ";
    cin>>a;
    ptr=&a;
    (*ptr)++;
    
    cout<<*ptr;

    
}
