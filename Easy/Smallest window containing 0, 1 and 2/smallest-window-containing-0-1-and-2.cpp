//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        vector<int>freq(3, 0);
        
        int i = 0, j = 0, n = s.size();
        int res = INT_MAX;
        
        while(j < n){
            ++freq[s[j] - '0'];
            
            while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0){
                res = min(res, j - i + 1);
                --freq[s[i++] - '0'];
            }
            
            ++j;
        }
        
        return res == INT_MAX ? -1 : res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends