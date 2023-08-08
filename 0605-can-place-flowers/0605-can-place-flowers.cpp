class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int num) {
        int i,n;
        n= flowerbed.size();
        if (num==0) return true;

        for(i=0;i<n;i++){
            if(flowerbed[i]==0 && (i==0 || (i>0 && flowerbed[i-1]==0)) && (i==n-1 || (i<n-1 && flowerbed[i+1]==0)) ) {
                num--;
                flowerbed[i] =1;
            }
            
            if(num==0) break;
        }
        
        return num==0;

        
    }
};