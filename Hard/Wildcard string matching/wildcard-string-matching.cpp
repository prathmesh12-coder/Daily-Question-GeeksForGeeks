//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool solveUsingRe(string&w,int si,string&p,int pi){
        if(si<0&&pi<0) return true;
        if(si<0||pi<0) return false;
        
        if(w[si]==p[pi]) return solveUsingRe(w,si-1,p,pi-1);
        if(w[si]=='?') return solveUsingRe(w,si-1,p,pi-1);
        if(w[si]=='*') return solveUsingRe(w,si-1,p,pi-1)||solveUsingRe(w,si-1,p,pi)||solveUsingRe(w,si,p,pi-1);
    }
    bool solveUsingMem(string&w,int wi,string&p,int pi,vector<vector<int>>&dp){
        if(wi<0&&pi<0) return true;
        if(wi<0||pi<0) return false;
        
        if(dp[wi][pi]!=-1) return dp[wi][pi];
        
        if(w[wi]==p[pi]) return dp[wi][pi]=solveUsingMem(w,wi-1,p,pi-1,dp);
        if(w[wi]=='?') return dp[wi][pi]=solveUsingMem(w,wi-1,p,pi-1,dp);
        if(w[wi]=='*') return dp[wi][pi]=solveUsingMem(w,wi-1,p,pi-1,dp)||solveUsingMem(w,wi-1,p,pi,dp)||solveUsingMem(w,wi,p,pi-1,dp);
    }
    bool match(string wild, string pattern)
    {
        // return solveUsingRe(wild,wild.size()-1,pattern,pattern.size()-1);
        vector<vector<int>>dp(wild.size()+1,vector<int>(pattern.size()+1,-1));
        return solveUsingMem(wild,wild.size()-1,pattern,pattern.size()-1,dp);
    }
}; 

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends