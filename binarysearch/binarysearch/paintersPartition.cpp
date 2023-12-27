
bool isPossible(vector<int> &boards, int k,int mid){
    int painters=1;
    int boardsSum=0;
    for(int i=0;i<boards.size();i++){
      if (boardsSum + boards[i] <= mid) {
        boardsSum = boardsSum + boards[i];
      } else {
        painters++;
        if (painters > k || boards[i] > mid) {
          return false;
        }
        boardsSum = boards[i];
      }
        }
        
    return true;
    }


int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum=0;
    for(int i=0;i<boards.size();i++){
        sum=sum+boards[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(boards,k,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}