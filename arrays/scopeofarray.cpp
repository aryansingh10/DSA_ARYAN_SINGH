#include <iostream>
using namespace std;
void update(int arr[],int size){
    cout<<"Inside udapte func"<<endl;
    arr[0]=120;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl; //array ka address pass hoga to memory niche bhi change ho ajeygi 120 aayega niche bhi
    cout<<"Entering main func"<<endl;
}

int main(){

    int arr[5]={1,2,3,4,5};
    update(arr,5);
    for (int i = 0; i < 5; i++)
    {
                cout<<arr[i]<<endl;
    }
    
    return 0;
}