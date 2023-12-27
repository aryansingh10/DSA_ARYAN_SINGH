#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
  char count='A';
    while (i<=n)
    {
    int j=1;
    
    while (j<=i)
    {    
      char ch='A'+i-1;
    cout<<ch;

        j++;
    }
    cout<<endl;
    i++;
    }
    
    return 0;
}
/*
4
A
BB
CCC
DDDD
*/