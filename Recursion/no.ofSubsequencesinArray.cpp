#include<iostream>
#include<vector>
using namespace std;

void func(int i, int arr[], vector<int> &ds, int n) {
    if(i == n) {
        for(auto it : ds) {
            cout << it << " ";
        }
        if(ds.size() == 0) {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // Take the current element into the subset
    ds.push_back(arr[i]);
    func(i + 1, arr, ds, n);
    ds.pop_back();

    // Do not take the current element into the subset
    func(i + 1, arr, ds, n);
}

int main() {
    int n = 3;
    int arr[n] = {1, 2, 3};

    vector<int> ds;
    func(0, arr, ds, n);
    return 0;
}
