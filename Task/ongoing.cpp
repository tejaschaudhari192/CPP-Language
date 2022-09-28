// 

#include<iostream>
using namespace std;

class student
{
    char name[20],add[20];
    int marks,rn;
    
    public:
    void getData()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Roll no : ";
        cin>>rn;
        cout<<"Enter Marks : ";
        cin>>marks;
    }
    void showData()
    {
        cout<<"Name : "<<name<<"\n"<<"Roll no : "<<rn<<"\n"<<"Marks : "<<marks;
    }
};

int main()
{
    student s1;
    s1.getData();
    s1.showData();
    
    return 0;

// coded by tejas
}

