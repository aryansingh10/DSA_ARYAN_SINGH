#include<iostream>
using namespace std;

int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int use=power(a,b/2);

    if (b%2==0) 
    {
        return use *use;
    }else
    {
        return a*use*use;
    }
    
    
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int ans=power(a,b);
    cout<<ans<<endl;
    return 0;
}