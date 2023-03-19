//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int,int> mp;
        int sum=0;
        int len=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                len=max(len,i+1);
            }
            
            int rem=sum-K;
            if(mp.find(rem)!=mp.end()){
                int l=i-mp[rem];
                len =max(len,l);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        
        return len;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends