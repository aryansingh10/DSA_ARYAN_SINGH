#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
          
          int pivot=arr[s];
          int count=0;
          for (int i = s+1; i <=e; i++) {   
            if (arr[i]<=pivot)
            {
                count++;
            }
          }
          int pivotIndex=s+count;
          swap(arr[pivotIndex],arr[s]);

          int i=s;
          int j=e;
          while (i<pivotIndex && j>pivotIndex)
          {
            while (arr[i]<=pivot)
            {
                i++;
            }
            while (arr[j]>pivot)
            {
                j--;
            }

            if (i<pivotIndex && j>pivotIndex)
            {
               swap(arr[i++],arr[j--]);
            }
            
            
          }
          
          return pivotIndex;
}

void quicksort(int arr[],int s,int e){
    if (s>=e)
    {
        return;
    }

    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    
}
int main()
{
    int arr[10] = {1, 34, 33, 43, 31, 312, 434, 3, 2, 556};
    int size = 10;  // Directly initialize the size of the array

    quicksort(arr, 0, size - 1);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

