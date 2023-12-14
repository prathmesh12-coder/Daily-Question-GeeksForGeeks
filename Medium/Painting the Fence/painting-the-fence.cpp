//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    const int mod=1e9+7;
    long long countWays(int n, int k){
        
      
        pair<long long, long long> dp;
        dp.first = k;
        dp.second = k;
        
        for (int i=1; i<n; i++) {
            pair<long long, long long> temp;
            temp.first = (dp.second*(k-1))%mod; // same colored
            temp.second = (dp.first + (dp.second*(k-1))%mod)%mod; // diff colored
            dp = temp;
        }
        return dp.second;
    
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends