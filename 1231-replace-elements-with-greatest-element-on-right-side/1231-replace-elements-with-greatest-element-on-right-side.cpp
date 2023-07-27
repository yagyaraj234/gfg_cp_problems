class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int n=arr.size()-1;
        int greatest=-1;
        int secondGreatest=0;
        for(int i=n;i>=0;i--){
            secondGreatest=arr[i];
            arr[i]=greatest;
            greatest=max(greatest,secondGreatest);
        }

        return arr;
        
    }
};