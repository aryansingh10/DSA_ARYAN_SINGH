#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    for ( int i = 0 ;i<size;i++){
        cout<<arr[i]<<" "<<endl;;
    }
}

int main(){
    // int num[15];
    // cout<<num[1]<<endl;
    // cout<<num[2]<<endl;

    int second[3]={1,2,3};
    cout<<"value"<<" "<<second[2]<<endl;
    cout<<second[1]<<endl;
    int n=10;
    // int third[15]={1,7};
    // for (int i=0; i<n;i++){
    //     cout<<"VALUES"<<" "<<third[i]<<endl;
    // }
    int fourth[10]={0};
    //  for (int i=0; i<n;i++){
    //     cout<<"VALUES"<<" "<<fourth[i]<<endl;
    // }
    printarray(fourth,10);
    int fifth[10]={1};
    printarray(fifth,10);

    char ch[4]={'a','b','c','d'};
    for (int i = 0; i < 4; i++)
    {
        cout<<ch[i]<<endl;
    }
    
    return 0;
}