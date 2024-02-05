#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class demo{
    public:
    int num;
    void read(){
        cout<<"Enter the string";
        cin>>num;
    }

    void print(){
        cout<<"The string is "<<num<<endl;
    }

    demo operator+(demo bb){
        demo cc;
       cc.num=num+bb.num;

        return cc;
    }
};
int main()
{
    demo d1,d2,d3;
    
    d1.read();
    d2.read();
    d3=d1+d2;
    d3.print();


    return 0;
}