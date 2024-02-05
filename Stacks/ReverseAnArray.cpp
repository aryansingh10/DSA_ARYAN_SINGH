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

int main(){
    stack<int> st;
    int arr[6]={1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        int num=arr[i];
        st.push(num);
    }

    int arr2[100];
    int index=0;
    while(!st.empty()){
        int num=st.top();
        arr2[index]=num;
        st.pop();
        index++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
}