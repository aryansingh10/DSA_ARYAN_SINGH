#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
 
  while (i<=n)
  {
    int space=i-1;
    while(space){
      cout<<" ";
      space--;  
    }

    int j=1;
    int star=n-i+1;
    while (j<=star)    
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
    
    
  }
    return 0;
}
/*
4      
****
 ***
  **
   **/