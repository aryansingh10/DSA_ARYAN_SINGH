#include<iostream>
using namespace std;

long long int mergeAndCount(int *arr, int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;

    for (int i = 0; i < len1; i++) {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[k++];
    }

    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;
    long long int inversionCount = 0;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            // Count inversions here
            arr[mainArrayIndex++] = second[index2++];
            inversionCount += len1 - index1;
        }
    }

    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;

    return inversionCount;
}

long long int mergeSort(int *arr, int s, int e) {
    if (s >= e) {
        return 0;
    }

    int mid = s + (e - s) / 2;

    // Count inversions in the left and right halves
    long long int leftInversions = mergeSort(arr, s, mid);
    long long int rightInversions = mergeSort(arr, mid + 1, e);

    // Count inversions during merging
    long long int mergeInversions = mergeAndCount(arr, s, mid, e);

    // Total inversions
    return leftInversions + rightInversions + mergeInversions;
}

int main() {
    int arr[5] = {233, 34, 31, 3434, 2};
    int size = 5;

    long long int inversions = mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nInversion Count: " << inversions << endl;

    return 0;
}
/*
#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    long long inversioncount=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                inversioncount++;
            }
        }
    }
    return inversioncount;
}*/