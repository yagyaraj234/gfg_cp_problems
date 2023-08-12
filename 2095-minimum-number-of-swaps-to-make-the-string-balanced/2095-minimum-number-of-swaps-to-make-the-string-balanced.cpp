class Solution {
public:
    int minSwaps(string s) {


        if(s==""){
            return 0;
        }
        
        stack<char> st;

        for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else st.push(s[i]);
            }
        }

        int swaps = (st.size()/2+1)/2;

        return swaps;
        
    }
};