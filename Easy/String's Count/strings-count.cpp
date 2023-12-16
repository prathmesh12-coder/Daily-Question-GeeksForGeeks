//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    
    long long int cnt=1;
    cnt+=n;
    cnt+=n;
    cnt+=(n*(n-1))/2;
    cnt+=(n*(n-1));
    
    if(n>2)cnt+=(n*(n-1)*(n-2))/2;
    return cnt;
}