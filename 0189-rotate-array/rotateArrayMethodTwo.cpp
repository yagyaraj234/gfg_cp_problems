#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;       // no of elemets in array
    int k=3;   // Now of elements to rotate
    int arr[7]={1,2,3,4,5,6,7};

    // rotate(arr,n,k);
    int temp[7];

    for(int i=0;i<n;i++){ // Here We run code from n-k means 

        // For example  [1,2,3,4,5,6,7]  k=3
        // then here we have to push three elem in front so we have to push n-k elem three time to the right

        temp[arr[(i+k)%n]]=arr[i];
    }
    for(int i=k;i<n;i++){

        arr[i]=temp[i];
    }

    for(auto it: arr){
        cout<<it;
    }


   

return 0;
}
