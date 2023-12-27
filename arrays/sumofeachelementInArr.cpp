#include <iostream>
using namespace std;

int SumofArray(int arr[],int size){
    int sum=0;
    for (int i = 0; i<size ; i++) {
        sum=sum+arr[i];

    }
    return sum;

}
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0 ;i<size;i++){
        cin >>num[i] ;
    }
    cout<<"the sum is"<<SumofArray(num,size);
    return 0;
}