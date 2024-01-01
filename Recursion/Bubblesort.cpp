#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    if(size==0 || size==1){
        return;
    }
    for (int i = 0; i < size-1; i++)
    {
       if (arr[i]>arr[i+1])
       {
        swap(arr[i],arr[i+1]);
       }
    }
    
   return bubbleSort(arr,size-1);
}
int main()
{
    int arr[5]={2,4,32,322};
    int size=4;
    bubbleSort(arr,size);
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}