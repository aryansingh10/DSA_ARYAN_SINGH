#include<iostream>
using namespace std;

int SUMofARRay(int *arr,int n){
    if (n==0)
    {
        return 0; 
    }

    if(n==1){
        return arr[0];
    }else
    {
        int RemainingPArt=SUMofARRay(arr+1,n-1);
        int ans=arr[0]+RemainingPArt;
        return ans;
    }
    
    
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    int ans=SUMofARRay(arr,size);
    cout<<ans<<endl;
    
    return 0;
}