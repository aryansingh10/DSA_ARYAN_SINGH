#include <iostream>
using namespace std;

int LargestSumRow(int arr[][3],int row,int col){
    int max=0;
   
    int maxIndex=-1;
    for (int i = 0; i < row; ++i) {
         int sum=0;
        for (int j = 0; j < col; j++) {
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
        maxIndex=i;
        }}
        cout<<"The Maxium Sum is"<<max<<endl;
    
    
    return maxIndex;
}

int main(){
     int arr[3][3];
    cout << "Enter the elements of array: \n";
    for(int i = 0 ;i<3;i++){
        for (int j=0;j<3;j++) {
            cin >> arr[i][j];
        }
    }
 int ans=LargestSumRow(arr,3,3);
 cout<<ans;

    return 0;
}