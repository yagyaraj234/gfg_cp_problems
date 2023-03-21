//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    
    
    int buy = 0;
    int sell = 0;
    int x = 1;

    for(int i =0; i<n; i++)
    {
        if(price[i] < price[buy]) { buy = i; }
        if(price[i+1] < price[i] && buy < i)
        {
            cout << "(" << buy << " " << i << ")" << " ";
            buy = i+1;
            x = 0;
        }
        if(i == n-1 && price[i] > price[buy] && buy < i) 
        {
            cout  << "(" << buy << " " << i << ")" ;
            x = 0;
        }
    }

    if(x) cout << "No Profit";

    cout << endl;
    
}