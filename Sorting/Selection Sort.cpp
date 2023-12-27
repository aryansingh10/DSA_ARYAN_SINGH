#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
   for(int i=0;i<n-1;i++){
       int minindex=i;
       for(int j=i+1;j<n;j++){
           if(arr[j]<arr[minindex]){
               minindex=j;
           }
            
       }
         swap(arr[minindex],arr[i]);
   }

}
void printArray(vector<int>& arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    vector<int> arr={64,25,12,22,11};
    int n=arr.size();
    //cout << "Original array: \n";
    //printArray(arr, n);
    selectionSort(arr, n);
    cout << "\n\nSorted array in Ascending order using Selection Sort: \n";
    printArray(arr, n);
}