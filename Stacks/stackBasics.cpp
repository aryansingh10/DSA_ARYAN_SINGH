#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(22);
    s.push(23);
    s.push(21);
    s.push(232);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    if (s.empty())
    {
        cout<<"Stack is Empty"<<endl;
    }else
    {
        cout<<"Stack is not Empty"<<endl;
    }
    
    
    return 0;
}