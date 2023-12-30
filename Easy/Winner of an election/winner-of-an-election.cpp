//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
         map<string,int>mp;
         for(int i=0;i<n;i++){
             mp[arr[i]]++;
         }
         int count=0;string s="";
         for(auto x:mp){
             if(count<x.second){
                 count=x.second;
                 s=x.first;
             }
         }
         string st= to_string(count); 
         vector<string>v;
         v.push_back(s);
          v.push_back(st);
          return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends