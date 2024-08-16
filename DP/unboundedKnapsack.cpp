#include<iostream>
using namespace std;

int UnboundedknapSack(int weight[],int value[],int W,int n)
{
    int dp[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if(weight[i-1]<=j)
            {
                dp[i][j]=max(value[i-1]+dp[i][j-weight[i-1]],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}
int main()
{
    int n;
    cout<<"Enter no. of objects"<<endl;
    cin>>n;

    int weight[n];
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter weight of object "<<i+1<<endl;
        cin>>weight[i];
    }

    int value[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter value of object "<<i+1<<endl;
        cin>>value[i];
    }
    
    int W;
    cout<<"Enter the maximum weight"<<endl;
    cin>>W;

    int dp[n+1][W+1];
    cout<<"Maximum value that can be obtained is "<<UnboundedknapSack(weight,value,W,n)<<endl;
   return 0;
}