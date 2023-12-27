#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if (n==0) return 1; //base case
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
        return fact;
    
}

int nCr(int n,int r){
         int numerator=(factorial(n));
    int denominator=(factorial(r) * factorial(n-r));
    
    return numerator/denominator ;
    
   
}

int main(){
   int n,r;
   cout<<"Enter N and R"<<endl;   
    cin>>n>>r;

cout<<"THe answer is"<<nCr(n,r)<<endl;
    return 0;
}