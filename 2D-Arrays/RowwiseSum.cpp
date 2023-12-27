#include <iostream>
using namespace std;

void RowWiseSum(int arr[][3],int row,int column){

    for (int i = 0; i <row ; i++) {
        int sum=0;
        for (int j = 0; j <column ; j++) {
            sum=sum+arr[i][j];
    }
    cout<<sum<<endl;
}

}

int main(){
    int arr[3][3];
    cout << "Enter the elements of array: \n";
    for(int i = 0 ;i<3;i++){
        for (int j=0;j<3;j++) {
            cin >> arr[i][j];
        }
    }
    
    RowWiseSum(arr,3,3);
    // Printing the entered matrix
    // cout<<"The Matrix is :\n";
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<"\t";
    //     }
    //     cout<<endl;
    //     }
    return 0;
}