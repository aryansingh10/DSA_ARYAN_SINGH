#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<<"The size of Array is"<<size<<" ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }cout<<endl;
    
}

bool linearSearch(int arr[], int size, int key) {

    print(arr,size);
    if (size == 0) {
        return false;
    }
    if (arr[0] == key) {
        return true;
    } else {
        int remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}


int main() {
    int arr[5] = {1, 2, 5, 45, 24};
    int size = 5;
    int key = 25; // Corrected the key
    int ans = linearSearch(arr, size, key);
    
    if (ans) {
        cout << "Present" << endl;
    } else {
        cout << "Absent" << endl;
    }

    return 0;
}
