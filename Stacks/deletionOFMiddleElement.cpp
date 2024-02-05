#include <bits/stdc++.h> 


void solve(stack<int>&inputStack,int count, int N){
   if(count==N/2){
      inputStack.pop();
      return;
   }
   int num=inputStack.top();
   solve(inputStack,count+1,N);
   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   stack<int> st;
   int count=0;

   solve(st,count,N);
   
}