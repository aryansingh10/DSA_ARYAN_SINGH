#include <iostream>
using namespace std;
 
void Sort01(int arr[],int size){
    int left=0;
    int right=size-1;
    while (left<right)
    {
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }

     if (left<right)          
        {
            swap(arr[left],arr[right]);
        }
        
    }
    
 }

void printArray(int arr[],int size){
    for ( int i = 0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={0,1,0,1,0,1,0,1};

    Sort01(arr,8);
    printArray(arr,8);
    
    return 0;
}