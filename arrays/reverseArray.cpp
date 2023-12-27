#include <iostream>
using namespace std;
  
  int Reverse(int arr[],int size){
    int start=0;
    int end=size-1;

while (start<=end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;
}

  }
    

void printArray(int arr[],int size){
         for (int i = 0; i < size; i++)
         {
            cout<<arr[i]<<" ";
         }
             
}

int main(){
    int arr[6]={4,5,6,88,99,45};
    int brr[5]={1,2,3,4,5};
    Reverse(arr,6);
    printArray(arr,6);
    cout<<endl;
    Reverse(brr,5);
    printArray(brr,5);

  
    return 0;
}