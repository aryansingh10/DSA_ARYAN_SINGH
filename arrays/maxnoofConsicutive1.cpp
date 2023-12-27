int consecutiveOnes(vector<int>& arr){
   int count=0; 
   int max1=0;
   for(int i=0;i<arr.size();i++){
       if(arr[i]==1){
           count++;
           max1=max(max1,count);
       }else{
           count=0;
       }
   }
   return max1;
}