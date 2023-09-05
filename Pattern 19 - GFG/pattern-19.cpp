//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i=0;
        while(i<n){
            
                
                // printing star
                
                for(int j=0;j<n-i;j++){
                    cout<<"*";
                }
                
                // Spaces
                
                for(int j=0;j<2*i;j++){
                    cout<<" ";
                }
                
                // printing star
                for(int j=0;j<n-i;j++){
                    cout<<"*";
                }
                
            
            i++;
            
            cout<<endl;
        }
        
        int j=1;
        while(j<=n){
            
            //stars
            
            for(int k=0;k<j;k++){
                cout<<"*";
            }
            // Spaces
            
            for(int k=1;k<=2*n-(2*j);k++){
                cout<<" ";
            }
            //stars
            
            for(int k=0;k<j;k++){
                cout<<"*";
            }
            cout<<endl;
            j++;
        }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends