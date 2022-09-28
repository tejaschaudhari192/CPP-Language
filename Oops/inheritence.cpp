// 

#include<iostream>
using namespace std;

class parent
{
public:
    void prp(){
        cout<<"Bhoju";
    }
};

class child : public parent
{
    

};


int main()
{
    cout<<"hi\n";
    child p1;
    p1.prp();
    // prp function written in parent class and we are accesing it from child class
    return 0;

// coded by tejas
}

