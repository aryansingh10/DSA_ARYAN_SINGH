#include<iostream>
using namespace std;

class student{

    int age;
    string name;

    public:
   int getAge(){
        return this->age;
    }
    string getName(){
        return this->name;
    }
};

int main()
{
     student s1;
     cout<<"All is well"<<endl;
    cout<< s1.getAge();
     cout<<s1.getName();
    
    return 0;
}
