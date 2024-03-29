//{ Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*Function to swap array elements
* arr : array input
* n : number of elements in array
*/
class Solution{
  public:
    void swapElements(int a[], int n){
        
         int p1 = 0; // Pointer 1
        int p2 = 2; // Pointer 2
        
        while (p1 < n && p2 < n) {
            swap(a[p1], a[p2]);
            p1 ++; 
            p2 ++;
        }
       
        
    }
};

//{ Driver Code Starts.

// Driver code to test swapElements
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
        Solution obj;
        // calling function to swap the array swap elements
	    obj.swapElements(arr, n);
	    
	    // Printing the modified array
	    for(int i = 0;i<n;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends