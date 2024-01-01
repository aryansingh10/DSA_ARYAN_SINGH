#include<iostream>
using namespace std;

bool isPalindrome(string &name,int i,int j){
    if(i>j){
        return true;
    }
    if (name[i]!=name[j])
    {
        return false;
    }

    return isPalindrome(name,i+1,j-1);
    
}
int main()
{
    string name="abba";
    bool isPali=isPalindrome(name,0,name.length()-1);
    if (isPali)
    {
        cout<<"String is Palindrome"<<endl;
    }else
    {
        cout<<"Not a PAlindorme"<<endl;
    }
    
    
    return 0;
}