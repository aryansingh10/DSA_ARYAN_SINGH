#include <vector>
using namespace std;

class Solution {
  public:
    long long int countInversions;

    void merge(long long arr[], int low, int mid, int high) {
      vector<long long> temp;
      int left = low;
      int right = mid + 1;

      while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
          temp.push_back(arr[left]);
          left++;
        } else {
          temp.push_back(arr[right]);
          countInversions += (mid - left + 1); // Correct inversion count
          right++;
        }
      }

      while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
      }

      while (right <= high) {
        temp.push_back(arr[right]);
        right++;
      }

      for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
      }
    }

    void solve(long long arr[], int low, int high) {
      if (low >= high) {
        return;
      }

      int mid = low + (high - low) / 2;
      solve(arr, low, mid);
      solve(arr, mid + 1, high);
      merge(arr, low, mid, high);
    }

    void mergeSort(long long arr[], int n) {
      countInversions = 0;
      solve(arr, 0, n - 1);
    }

    long long int inversionCount(long long arr[], long long N) {
      mergeSort(arr, N);
      return countInversions;
    }
};