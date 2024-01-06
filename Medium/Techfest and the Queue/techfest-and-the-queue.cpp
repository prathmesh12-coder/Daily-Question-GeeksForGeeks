//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int givecount(int x,vector<int> &v){
        int ans =0;
        for(int i=2;i<=x;i++){
            if(v[i]==0){
            int z =i;
            while(z<=x){
                ans+=x/z;
                z*=i;
                
            }
            }
        }
        return ans;
    }
    int sumOfPowers(int a, int b){
        vector<int>v(b+1,0);
        v[0] =1;
        v[1] =1;
        for(int i=2;i<=b;i++){
            if(v[i]==0){
            for(int j = i+i;j<=b;j+=i){
                v[j] = 1;
            }
            }
        }
        return givecount(b,v) - givecount(a-1,v);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends