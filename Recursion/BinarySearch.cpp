#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for (int i = s; i < e; i++)
    {
         cout<<arr[i]<<" ";
    }cout<<endl;
    
}

int binarySearch(int arr[],int s,int e,int key){
    cout<<endl;
    print(arr,s,e);
    if (s>e)
    {
        return -1;
    }
    int mid=s+(e-s)/2;
    cout<<"The  value of mid is "<<arr[mid]<<endl;
    if (arr[mid]==key)
    {
        return 1;
    }else if (arr[mid]<key)
    {
        return binarySearch(arr,mid+1,e,key);
    }else
    {
        return binarySearch(arr,s,mid-1,key);
    }
    
    
    

    
}
int main()
{
    int arr[10] = {1, 2, 5, 15, 24,44,46,90,99,100};
    int size = 10;
    int key = 100; // Corrected the key
    cout<<"Present or not = "<<" "<<binarySearch(arr,0,10,key);

    return 0;
}