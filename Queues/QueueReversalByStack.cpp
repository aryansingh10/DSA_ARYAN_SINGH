class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
     stack <int> st;
     
     while(!q.empty()){
         int element=q.front();
         q.pop();
         st.push(element);
     }
     
     while(!st.empty()){
         int element=st.top();
         st.pop();
         q.push(element);
     }
     return q;
    }
};
