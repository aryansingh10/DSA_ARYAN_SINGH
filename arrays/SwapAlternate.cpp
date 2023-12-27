#include <iostream>
using namespace std;

int SwapAlert(int arr[],int size){
    for (int i = 0; i < size; i=i+2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
void printArray(int arr[],int size){
    for ( int i = 0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={12,15,78,99,65,55};
    int brr[5]={15,78,99,65,55};
 SwapAlert(arr,6);
 printArray(arr,6);
 SwapAlert(brr,5);
 printArray(brr,5);
  
    return 0;
}