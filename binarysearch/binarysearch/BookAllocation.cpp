bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentcount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum = pageSum + arr[i];
        } else {
            studentcount++;
            if (studentcount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
     if (n < m) {
        // If there are fewer elements in the vector than students, it's not possible.
        return -1;
    }
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    int end = sum;
    int ans = -1;

    while (s <= end) {
        int mid = s + (end - s) / 2;  // Calculate mid inside the loop
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}
