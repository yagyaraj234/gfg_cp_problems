class Solution {
public:
    bool wordPattern(string p, string s) {

       
        vector<string> str;
        string push="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(isspace(ch)){
                str.push_back(push);
                push="";
            }
            else{
                push+=ch;
            }
        }
        str.push_back(push);

        if(p.size()!= str.size()) return false;

        unordered_map<char,string> ump;
        set<string> st;

        for(int i=0;i<p.size();i++){
            if(ump.find(p[i])!=ump.end()){
                if(ump[p[i]]!=str[i]){
                    return false;
                }
            }
            else {
                if(st.count(str[i])>0){
                    return false;
                }
                ump[p[i]]=str[i];
                st.insert(str[i]);
            }
        }

        return true;
    }
};