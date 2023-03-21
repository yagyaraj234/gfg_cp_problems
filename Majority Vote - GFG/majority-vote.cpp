//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        
        map<int,int> up;
        vector<int> res;
        int size=nums.size()/3;
        
        for(int i=0;i<nums.size();i++){
            up[nums[i]]++;
        }
        for(auto it: up){
            if(it.second >size){
                res.push_back(it.first);
            }
        }
        up.clear();
        if(!res.empty()){
            return res;
        }
        else{
        res.push_back(-1);
        return res;  
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
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends