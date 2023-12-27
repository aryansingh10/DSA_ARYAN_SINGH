
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        for(int i=0;i<str.length();i++){
            int num=0;
            char ch=str[i];
            if(ch>='a' && ch<='z'){
                num=ch-'a';
            }else{
                num=ch-'A';
            }
            arr[num]++;
        }
        int ans=0,maxi=INT_MIN;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        return 'a'+ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }