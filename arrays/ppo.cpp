#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"I am in A"<<endl;
    }
};

class B{
    public:
    B(){
        cout<<"I am in B"<<endl;
    }
};
    class C: public A,virtual public B
    {
    public:
    C(){
        cout<<"I am in C"<<endl;
    }};
int main()
{
    C c1;
    return 0;
}