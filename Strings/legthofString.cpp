#include <iostream>
using namespace std;
int getLEngthofString(char name[]){
  int count = 0;
  for(int i=0;name[i]!='\0';i++){
    count++;
  }
  return count;
}

int main() {
  char name[20];
  cout<<"Ente your name;";
  cin>>name;
  cout<<"My name is"<<name<<endl;
  cout<<"Length of string is"<<getLEngthofString(name)<<endl;
  
  return 0;
}