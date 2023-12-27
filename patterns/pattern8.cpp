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
            cout<<row-col+1;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
}

/*
1
21
321
4321
*/