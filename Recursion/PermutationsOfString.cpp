#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(string &str, int index, vector<string> &ans) {
    // Base case: if we have processed the entire string, add the permutation to the result
    if (index >= str.length()) {
        ans.push_back(str);
        return;
    }

    // Iterate through characters from the current index to the end
    for (int j = index; j < str.length(); j++) {
        // Swap characters at the current index and j
        swap(str[index], str[j]);

        // Recursively generate permutations for the remaining substring
        solve(str, index + 1, ans);

        // Backtrack by swapping the characters back to their original positions
        swap(str[index], str[j]);
    }
}

vector<string> generatePermutations(string &str) {
    vector<string> ans;
    int index = 0;
    solve(str, index, ans);

    // Sort the permutations lexicographically
    sort(ans.begin(), ans.end());

    return ans;
}
