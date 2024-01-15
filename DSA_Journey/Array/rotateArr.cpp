//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int m, int n){
        // code here
        vector <int> brr;
        for(int i = m; i<n; i++){
            brr.push_back(arr[i]);
        }
        for(int i=0; i<=m; i++){
            brr.push_back(arr[i]);
        }
        
		for(int i=0; i<brr.size()-1; i++){
			cout<<brr[i]<<" ";
		}
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    // for(int i =0;i<n;i++){
	    //     cout << arr[i] << " ";
	    // }
	    // cout << endl;
	}
	return 0;
}
// } Driver Code Ends