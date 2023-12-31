#include<iostream>
using namespace std;

bool isSorted(int *arr,int n){
    if(n==0 || n==1){
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }else
    {
        isSorted(arr+1,n-1);
    }
    
    
}
int main()
{
    int arr[5]={1,11,4,5,9};
    int size=5;
int ans=isSorted(arr,size);
   if (ans)
   {
    cout<<"Array is Sorted"<<endl;
   }else
   {
    cout<<"Array is not sorted"<<endl;
   }
   
   

 return 0;
}