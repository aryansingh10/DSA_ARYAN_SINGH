int missingNumber(vector<int>&a, int N) {
    int Sum=(N*(N+1))/2;
    int Sum2=0;
    for(int i=0;i<a.size();i++){
        Sum2=Sum2+a[i];
    }
    return  Sum-Sum2;
}