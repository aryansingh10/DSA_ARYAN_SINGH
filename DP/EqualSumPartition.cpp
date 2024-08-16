#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sumofarray=0;
    for(int i=0;i<n;i++)
    {
        sumofarray+=arr[i];
    }
    
    if (sumofarray%2!=0)
    {
        cout<<"False";
    }
    
    else
    {
        int sum=sumofarray/2;
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
        cout<<dp[n][sum];
    }
    
    return 0;
}