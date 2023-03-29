//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *a=new int[2];
        int smallest=1;
        unordered_map<int,int> mp;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            if(arr[i]==smallest){
                smallest++;
            }
        }
        
        int repeat;
        for(auto it :mp){
            if(it.second>1){
                repeat=it.first;
            }
        }
        
        a[0]=repeat;
        a[1]=smallest;
        
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends