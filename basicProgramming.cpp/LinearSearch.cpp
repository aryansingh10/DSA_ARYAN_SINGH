#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
      cout<<"element found at index"<<i<<endl;
      return true;
        }
        
    }
    return false;
}

int main(){
    int arr[10]={1,-2,3,56,45,7,89,45,77,55};
    int key;
    cin>>key; 
    bool found=linearSearch(arr,10,key);
    if(!found){
        cout<<"element does not found"<<endl;
    }

   

    return 0;
}