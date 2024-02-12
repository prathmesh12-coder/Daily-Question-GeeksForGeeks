//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
        int mod=1e9+7;
    long long ans = 0;
    void solve(int n,int ind, int m){
        if(ind > n){
            return;
        }
        long long result = 1;
        for(int i=0;i<ind;i++){
            result=(result*m)%mod;
            m++;
        }
        ans+=result;
        solve(n,ind+1,m);
    }
    long long sequence(int n){
        // code here
        
        solve(n,1,1);
        return ans%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends