#include<iostream>
using namespace std;

bool subsetSum(int arr[],int n,int sum)
{
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0)
            {
                dp[i][j]=false;
            }
            if(j==0)
            {
                dp[i][j]=true;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][sum]<<endl;
    return dp[n][sum];
}

 
int main()
{
    int n;
    cout<<"Enter no. of objects"<<endl;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cout<<"Enter the value of object "<<i+1<<endl;
    cin>>arr[i];
}
int sum;
cout<<"Enter the sum"<<endl;
cin>>sum;
    subsetSum(arr,n,sum);
    return 0;
}