#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row;
    row=1;
    int count=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
}
// output
/tmp/V6ktbS2ABt.o
/*5
1
22
333
4444
55555 */