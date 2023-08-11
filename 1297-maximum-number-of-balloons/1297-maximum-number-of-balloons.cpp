class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char,int> ump({{'b', 0}, {'a', 0},{'l',0},{'o',0},{'n',0}});

        for(auto ch: text){
            if(ch=='b' || ch=='a' || ch== 'l' || ch=='o' || ch=='n')
                ump[ch]++;
        }

        ump['l']/=2;
        ump['o']/=2;
        int min =INT_MAX;
        for( auto i : ump){
            if(i.second<min){
                min=i.second;
            }
        }

        return min;

        
    }
};