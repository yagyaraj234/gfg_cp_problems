class Solution {
public:
    int lengthOfLastWord(string s) {

        int size=s.size()-1;
        int count=0;
        for(int i=size;i>=0;i--){

            char ch=s[i];
            if(ch==' ' && count!=0){
                break;
            }
            else if(ch!=' '){
                count++;
            }

        }
        return count;
        
    }
};