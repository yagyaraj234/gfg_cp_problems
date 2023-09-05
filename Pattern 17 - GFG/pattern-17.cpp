//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=1;i<=n;i++){
            // Spaces
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            // char
            char  ch='A';
            
            for(int j=1;j<=i-1;j++){
                cout<<ch;
                ch++;
            }
            
            for(ch;ch>='A';ch--){
                cout<<ch;
            }
            
            cout<<endl;
            
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