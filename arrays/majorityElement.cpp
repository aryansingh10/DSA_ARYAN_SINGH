class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here 
    //Brute
    // int count =0;
    // for (int i=0;i<size;i++ ){
    //     count =0;
        
    //     for(int j=0;j<size;j++){
    //         if(a[i]==a[j]){
    //             count++;
    //         }
    //     }
        
    //     if(count>size/2){
    //         return a[i];
    //     }
    // }
    // return -1; 
    //Better
    
    //  map<int,int> mapping;
     
    //  for(int i=0;i<size;i++){
    //      mapping[a[i]]++ ;//Store  the count;
    //  }
     
    //  for(auto it:mapping){
    //      if(it.second>size/2){
    //          return it.first;
    //      }
    //  }
    //  return -1;
                
    // }
    
    //Optimal
    
    int ele=0;
    int count=0;
    
    for(int i=0;i<size;i++){
        if(count==0){
            count =1;
            ele=a[i];
        }else if(a[i]==ele){
            count++;
        }else{
            count--;
        }
    }
    
    int count2=0;
    
    for(int i=0;i<size;i++){
        if(a[i]==ele){
            count2++;
        }
    } 
    
    if(count2>size/2){
        return ele;
    }
         return -1;
    }
};