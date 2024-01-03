#include<iostream>
using namespace std;

void solve(string str, string output, int index, string &ans) {
    if (index >= str.length()) {
        ans += output + " ";  // Append the current output to ans
        return;
    }

    // Exclude
    solve(str, output, index + 1, ans);

    // Include
    output += str[index];  // Append the current character to output
    solve(str, output, index + 1, ans);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string ans = "";
    string output = "";
    int index = 0;

    solve(str, output, index, ans);

    cout << "Subsets: " << ans << endl;

    return 0;
}
