//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
         vector <int> search(string pat, string txt)
        {
           vector<int>ans;
           size_t pos = txt.find(pat);
           while(pos!=string::npos)
           {
               ans.push_back(pos+1);
               pos = txt.find(pat,pos+1);
           }
           if(ans.empty())
           {
               ans.push_back(-1);
           }
           return ans;
        }
     
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends