class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        
        for(int i=0;i<n-2;i++){
            int low=i+1;
            int high=n-1;
            
            while(low<high){
                int currentSum=A[i]+A[low]+A[high];
                
                if(currentSum==X){
                    return true;
                }else if(currentSum<X){
                    low++;
                }else{
                    high--;
                }
            }
        }
        
        return false;
    }

};