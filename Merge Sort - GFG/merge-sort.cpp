//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int left, int m, int r)
    {
         // Your code here
         int l=left;
         int e=m+1;
         
        //  vector<int> temp;
        int temp[r-left+1];
        int i=0;
         
         while(l<=m && e<=r ){
             if(arr[l]<=arr[e]){
                 temp[i]=arr[l];
                 l++;
                 i++;
             }
             else{
                 temp[i]=arr[e];
                 i++;
                 e++;
             }
         }   
         
         while(l<=m){
             temp[i]=arr[l];
             l++;
             i++;
         }
         while(e<=r){
             temp[i]=arr[e];
             e++;
             i++;
         }
       
         
         
         for(int i=left;i<=r;i++){
             arr[i]=temp[i-left];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){
        int mid=l+(r-l)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
        }
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends