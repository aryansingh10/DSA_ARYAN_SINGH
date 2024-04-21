

#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    
    int n=a.size();
    int m=b.size();
    vector <int> unionArr;

int i=0;
int j=0;
  while(i<n && j<m){

      if(a[i]<=b[j]){
          if( unionArr.size()==0  ||unionArr.back()!=a[i]){
              unionArr.push_back(a[i]);
          } 
          i++; 
      }
      else{
               if( unionArr.size()==0  ||unionArr.back()!=b[j]){
              unionArr.push_back(b[j]);
          } 
          j++; 
      }
  }

  while(i<n){
            if( unionArr.size()==0  ||unionArr.back()!=a[i]){
              unionArr.push_back(a[i]);
          } 
          i++; 
      }
    while(j<m){
        if( unionArr.size()==0  ||unionArr.back()!=b[j]){
              unionArr.push_back(b[j]);
          } 
          j++; 
    }  
  
  return unionArr;
}