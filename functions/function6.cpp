#include <iostream>
using namespace std;

int noOF1BitsforA(int a){
    int count =0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int noOF1BitsforB(int b){
    int count =0;
    while(b!=0){
        if(b&1){
        count++;
        }
        b=b>>1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans1=noOF1BitsforA(a);
    int ans2=noOF1BitsforB(b);
    int ans=ans1+ans2;
    
    cout<<ans<<endl;
    
    
    return 0;
}