#include <iostream>
using namespace std;

int main(){
    int num=2;

    switch (num)
    {
    case 1:
        cout<<"one Accepted";
        break;

    case 2:cout<<"two accepted";
    break;
    
    default:cout<<"No case accepted"<<endl;
        break;
    }
    return 0;
}