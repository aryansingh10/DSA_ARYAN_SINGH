#include<iostream>
using namespace std;

void Reverse(string &name,int i,int j){
    if(i>j){
        return ;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    Reverse(name,i,j);
}
int main()
{
    string name;
    cin>>name;
Reverse(name,0,name.length()-1);
cout<<name<<endl;

    return 0;
}