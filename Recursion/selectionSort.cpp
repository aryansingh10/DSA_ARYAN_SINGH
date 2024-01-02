#include<iostream>
using namespace std;

void selectionSort(int arr[],int size,int start=0){
      if (start >= size - 1) {
        // Debug statement
        return;//Kabhi start size -1 se badh gaya to 
    }
    int minindex=start;
    for (int i = start ; i < size; i++)
    {
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }
    swap(arr[start],arr[minindex]);

    return selectionSort(arr,size,start+1);
    
    
}
int main()
{
    int arr[5]={23,22,44,21,10};
    int size=5;
    selectionSort(arr,size,0);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}