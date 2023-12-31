#include <iostream>
using namespace std;

int power_of_two(int n) {
    if (n == 0) return 1;

    int smaller_problem = power_of_two(n - 1);
    int larger_problem = 2 * smaller_problem;
    return larger_problem;
}

int main() {
    int n;
    cout << "Enter the exponent: ";
    cin >> n;
    int ans = power_of_two(n);
    cout << "2^" << n << " is: " << ans << endl;
    return 0;
}
