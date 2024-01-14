//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++



class Solution
{   
    
    int isEqual(vector<int> first, vector<int> second){
        if(first.size()!=second.size()) return 0;
        for(int i=0;i<first.size();i++){
            if(first[i]!=second[i]) return 0;
        }
        return 1;
    }
    
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        vector<int> ans;
        vector<vector<int> > storage;
        int l = 0;
        for(vector<int> a:matrix){
          if(storage.size()==0){
              storage.push_back(a);
          }
          else{
              int flag = 0;
              for(int i=0;i<storage.size();i++){
                  if(isEqual(storage[i],a)){
                      ans.push_back(l);
                      flag = 1;
                      break;
                  }
              }
              storage.push_back(a);
          }
          l++;
        }
        
        return ans;
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        vector<int> ans = ob.repeatedRows(matrix, row, col);


        for (int i = 0; i < ans.size(); ++i)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// } Driver Code Ends