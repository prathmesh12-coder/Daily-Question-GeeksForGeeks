//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
{
    // code here 
    int size = s.size();
    
    int arr[26] = {0};
    int unique_chars = 0;
    for(char&c : s){
        if (arr[c- 'a'] == 0)
            unique_chars++;
        arr[c- 'a']++;
    }
    int mx = INT_MIN, mn = INT_MAX;
        for (int i = 0; i < 26; ++i) {
        mx = max(mx, arr[i]);
        if (arr[i] != 0)
        mn = min(mn, arr[i]);
        }
    
    return (size % unique_chars ) <= 1 && (mx - mn) <= 1; 
    
}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends