//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution{
public:
    int dpf(int i, int j, int n, int m,vector<vector<int>>&dp,vector<vector<int>>&M)
    {
        if(i>=n || j>=m || i < 0 || j < 0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j] = M[i][j] + max(dpf(i+1,j+1,n,m,dp,M), max(dpf(i-1,j+1,n,m,dp,M),dpf(i,j+1,n,m,dp,M)));
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        int ans = 0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i = 0; i < n; i++)
        {
            int a = dpf(i,0,n,m,dp,M);
            //cout<<a<<" ";
            if(ans < a)
            {
                ans = a;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends