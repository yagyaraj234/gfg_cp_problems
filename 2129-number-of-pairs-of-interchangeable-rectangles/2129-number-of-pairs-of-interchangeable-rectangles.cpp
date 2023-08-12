class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rect) {

        long long ans=0;
        unordered_map<double,int> ump;

        for(int i=0;i<rect.size();i++){

            double first=rect[i][0];
            double second =rect[i][1];

            double a=first/second;
            ump[a]++;
            
        }
        for(auto it: ump){
            cout<<it.second<<endl;
        }

        for(auto it:ump){
            if(it.second>1){
                ans+=((it.second)*1LL*(it.second-1))/2;
            }
        }
        return ans;
        
    }
};