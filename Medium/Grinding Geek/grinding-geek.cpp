//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<vector<int>> dp;
    int solve(int idx, int amt, vector<int> &cost)
    {
        if(amt <= 0 || idx > (cost.size() -1))
            return 0;
        if(dp[idx][amt] != -1)
            return dp[idx][amt];
        int take = 0, nottake = 0;    
        if(amt>=cost[idx])
        {
            take = 1 + solve(idx+1,amt-cost[idx] + 0.9*cost[idx],cost);
            nottake = solve(idx+1,amt,cost);
        }
        else
        {
            nottake = solve(idx+1,amt,cost);
        }
        int ans = max(take,nottake);
        return dp[idx][amt]=ans;
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        dp =  vector<vector<int>>(1005,vector<int>(1005,-1));
        return solve(0,total,cost);
        //return ans;
        //Code Here
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends