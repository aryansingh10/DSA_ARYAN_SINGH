#include <iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    while(start<=end){
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]<key)
        {
            start=mid+1;
        }
        if (arr[mid]>key)
        {
            end=mid-1;
        }
        mid= start +(end-start)/2;        
        
    }
    return -1;
}

int main(){
    int arreven[6]={3,6,9,12,15,18};
    int arrodd[5]={5,10,15,20,25};

 int index = BinarySearch(arreven,6,15);
 int index2=BinarySearch(arrodd,5,15);
  cout<<"Element found at index"<<index<<endl;
    cout<<"Element found at index"<<index2<<endl;
    return 0;
}