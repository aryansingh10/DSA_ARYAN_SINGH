#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool IsPrime=1;
for (int i = 2 ; i < n; i++)
{
    if(n%i==0){
        IsPrime=0;
        break;
    }
}
if (IsPrime==0)
{
    cout<<"Prime number"<<endl;
}else
{
    cout<< "Not a prime number"<<endl;
}


    return 0;
}