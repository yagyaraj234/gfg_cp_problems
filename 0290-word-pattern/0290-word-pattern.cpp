class Solution {
public:
    bool wordPattern(string p, string s) {

    //    First push string s all string into a vector
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

        // Check if the size does not match then direct return false
        if(p.size()!= str.size()) return false;

        unordered_map<char,string> ump;
        set<string> st;

        for(int i=0;i<p.size();i++){

            // check the value of pattern[i] present on map or not
            if(ump.find(p[i])!=ump.end()){
                // if the value is present in map
                // and compare the value of pattern[i] and str[i] if it is not similar return false
                if(ump[p[i]]!=str[i]){
                    return false;
                }
            }
            // if the value of pattern of [i] does not present in the map
            // check the count of str[i] in  the set if it is greater then 0 return 0;
            else if(st.count(str[i])>0){
                    return false;
                }
        // if all the above case does not match  then insert  string into the set 
            else{
                
                ump[p[i]]=str[i]; 
                
                st.insert(str[i]);  // inserting string into set
            }
        }

        return true;
    }
};