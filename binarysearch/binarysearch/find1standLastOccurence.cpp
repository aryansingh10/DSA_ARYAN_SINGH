#include<iostream>
using namespace std;

int Firstoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start +(end-start)/2;
    while(start<=end){
        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }else if (arr[mid]>key) 
        {
            end=mid-1;
        }else if (arr[mid]<key)
        {
            start=mid+1;
        }
        mid = start+(end-start)/2;

    }
  return ans;
}

int SecondOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start +(end-start)/2;
    while(start<=end){
        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }else if (arr[mid]>key) 
        {
            end=mid-1;
        }else if (arr[mid]<key)
        {
            start=mid+1;
        }
        mid = start+(end-start)/2;

    }
  return ans;
}
int main(){
     int even[8]={3,4,5,4,5,4,6,7};
     cout<<"First Occurrence of 4 is at index "<<Firstoccurence(even,8,4);
     cout<<"\nSecond Occurrence of 4 is at index "<<SecondOccurence(even,8,4);


    return 0;

}