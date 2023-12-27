#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Entr the value"<<endl;
    cin>>n;
    int i=0;
    int conv=0;
    while (n!=0)
    {
        int bit=n&1;
        conv=(bit*pow(10,i))+conv;
        n=n>>1;
        i++;
    }
    cout<<conv<<endl;
    
    return 0;
}