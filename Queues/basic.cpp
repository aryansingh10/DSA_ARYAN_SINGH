#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <int> q;
    
    q.push(4);
    q.push(6);
    cout<<q.front();
    return 0;
}