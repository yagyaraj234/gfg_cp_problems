//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        if(N==0)
        {
            return 0;
        }
        sort(arr,arr+N);
        int longestStreak=1,currentStreak=1;
        for(int i=0;i<N;i++)
        {
            if(arr[i]!=arr[i-1])
            {
                if(arr[i]==arr[i-1]+1)
                {
                    currentStreak++;
                }
                else
                {
                     
                    currentStreak=1;
                }
            }
            longestStreak=max(currentStreak,longestStreak);
            
        }
        return longestStreak;
    
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends