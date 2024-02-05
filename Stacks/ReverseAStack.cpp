#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    
    Stack(int size){
        this->size=size;
        top=-1;
    }
    

     
};



int main()
{
    string s;
    cin>>s;
    stack <char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        st.push(ch);
    }
    string ans="";
    while (!st.empty( ))
    {
        char ch=st.top();
          ans.push_back(ch);
          st.pop();
    }
    cout<<ans<<endl;
    
    
    return 0;
}