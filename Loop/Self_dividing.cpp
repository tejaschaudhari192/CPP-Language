//Date : 9/10/22

#include<iostream>
using namespace std;

int main()
{
    int n,rem,flag=0,bkp,count=0;
    cout<<"Enter number to check self dividing or not : ";
    cin>>n;

    bkp=n;

    while (n>0)
    {
        rem=n%10;
        n=n/10;

        if(bkp%rem==0)
            count+=1;
        else
            flag=1;

    }

    cout<<"SD nums : "<<count<<endl;

    if(flag==0)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;

// coded by Tejas
}