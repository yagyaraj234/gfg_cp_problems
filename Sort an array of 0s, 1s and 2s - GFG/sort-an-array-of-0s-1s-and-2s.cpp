//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int z[], int n)
    {
        int a=0,b=0,c=0;
        
        for(int i=0;i<n;i++){
            if(z[i]==0) a++;
            if(z[i]==1) b++;
            if(z[i]==2) c++;
        }
        
        int index=0;
        
        while(a--){
            z[index++]=0;
        }
        while(b--){
            z[index++]=1;
        }
        while(c--){
            z[index++]=2;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends