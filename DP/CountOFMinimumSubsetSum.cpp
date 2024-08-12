#include <iostream>
using namespace std;

int countofsubsetsum(int arr[], int n, int sum)
{
    int dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
            {
                dp[i][j] = 0;
            }
            if (j == 0)
            {
                dp[i][j] = 1;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}
int main()

{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff;
    cout << "Enter the difference: ";
    cin >> diff;
    int sumofarray = 0;
    for (int i = 0; i < n; i++)
    {
        sumofarray += arr[i];
    }
    int sum = (diff + sumofarray) / 2;
    cout << "The count of subset sum is: " << countofsubsetsum(arr, n, sum);

    
    return 0;
}