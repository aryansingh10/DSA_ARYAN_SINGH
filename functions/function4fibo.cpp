#include <iostream>
using namespace std;

int fibonacci(int n){
    int fib1=-1;
    int fib2=1;
    int fib;
    while (n!=0)
    {
          fib=fib1+fib2;
           fib1=fib2;
            fib2=fib;     
            n--;
    }
    return fib;
}
int main(){
 int n;
 cin>>n;
    cout<<fibonacci(n);
    return 0;
}