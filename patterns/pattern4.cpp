#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row;
    row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
    return 0;
}
/*/ output 
*
**
***
****
***** */