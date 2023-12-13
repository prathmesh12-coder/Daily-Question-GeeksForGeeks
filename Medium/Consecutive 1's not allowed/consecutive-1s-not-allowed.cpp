//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
// 	void helper(int i,int n,string temp,ll &cnt,string prev){
// 	    if(temp.size()==n){
// 	        cnt++;
// 	        return ;
// 	    }
// 	    if(prev=="-1"||prev=="0"){
// 	        helper(i+1,n,temp+"0",cnt,"0");
// 	        helper(i+1,n,temp+"1",cnt,"1");
// 	    }
// 	    else if(prev=="-1"||prev=="1"){
// 	        helper(i+1,n,temp+"0",cnt,"0");
// 	    }
// 	}
	ll countStrings(int n) {
	    int mod=1e9+7;
	   int a=1,b=1,c=0,d=0;
	   for(int i=1;i<=n;i++){
	       d=a%mod;
	       c=(a+b)%mod;
	       a=c;
	       b=d;
	   }
	    return a;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends