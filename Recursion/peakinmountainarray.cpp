#include <iostream>
#include <vector>

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& arr, int s, int e) {
        if (s > e) {
            return -1;
        }
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        } else if (arr[mid] < arr[mid + 1]) {
            return peakIndexInMountainArray(arr, mid + 1, e);
        } else {
            return peakIndexInMountainArray(arr, s, mid);
        }
    }

    int peakIndexInMountainArray(std::vector<int>& arr) {
        return peakIndexInMountainArray(arr, 0, arr.size() - 1);
    }
};