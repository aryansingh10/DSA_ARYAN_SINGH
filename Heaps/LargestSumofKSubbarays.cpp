#include <queue>

int getKthLargest(vector<int> &arr, int k)

{

    int n = arr.size();

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {

        int sum = 0;

        for (int j = i; j < n; j++)
        {

            sum += arr[j];

            if (pq.size() < k)

                pq.push(sum);

            else
            {

                if (sum > pq.top())
                {

                    pq.pop();

                    pq.push(sum);
                }
            }
        }
    }

    return pq.top();
}

#include <algorithm>
#include <vector>
int getKthLargest(vector<int> &arr, int k)
{
vector <int> ans;
   int n=arr.size();

   for(int i=0;i<n;i++){
	   int sum=0;
	   for(int j=i;j<n;j++){
		   sum=sum+arr[j];
		   ans.push_back(sum);
	   }
   }	
   sort(ans.begin(),ans.end());
//Ans Ka Size LEna
   return ans[ans.size()-k];
   
}