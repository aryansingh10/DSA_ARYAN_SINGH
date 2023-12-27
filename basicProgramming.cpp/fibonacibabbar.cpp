#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int fib1 = 0;
    int fib2 = 1;
    
    cout << fib1 << endl;  
  cout<<fib2<<endl;// Output the first Fibonacci number
    
    for (int i = 2; i <= n; i++) {
        int sm = fib1 + fib2;
        cout << sm << endl;
        
        // Update fib1 and fib2 for the next iteration
        fib1 = fib2;
        fib2 = sm;
    }
    
    return 0;
}
