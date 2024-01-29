#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int [size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }else
        {
            cout<<"Stack is Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
          if (top>=0 && top<size)
          {
            return arr[top];
          }else
          {
            cout<<"Stack is Empty"<<endl;
          }
    }

    bool isEmpty(){
        if (top==-1)
        {
            cout<<"This is a Empty Stack"<<endl;
            return 1;
        }else
        {
            cout<<"This stack is  not empty"<<endl;
            return 0;
        }
        
        
    }
};




int main()
{
    Stack st (5);
    st.push(33);
    st.push(323);
    cout<<st.peek()<<endl;
    st.push(332332);
    cout<<st.peek()<<endl;
    st.push(332424);
    st.push(3213);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
   cout<< st.peek()<<endl;

   if (st.isEmpty())
   {
    cout<<"This is a Empty Stack"<<endl;
   }else
   {
 cout<<"This stack is  not empty"<<endl;
   }
   
   

    return 0;
}