// 

#include<iostream>
using namespace std;

class calc
{
    public:
    void add(int x,int y){
        cout<<"\nAddition = "<<x+y;
    }
    void add(float x,int y){
        cout<<"\nAddition = "<<x+y;
    }
    void add(int x,float y){
        cout<<"\nAddition = "<<x+y;
    }
    void add(float x,float y){
        cout<<"\nAddition = "<<x+y;
    }
};


int main()
{
    calc c1;
    cout<<"hi";
    c1.add(1,2);
    c1.add(3,2.4f);
    c1.add(1.6F,2);
    c1.add(1.6F,2.2f);
    return 0;

// coded by tejas
}

