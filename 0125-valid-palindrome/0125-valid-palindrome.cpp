class Solution {
    private:
    bool checkValidChar( char ch )
    {
    if(ch >= 'a' && ch <= 'z'||ch>='A'&& ch<='Z' || ch>= '0' && ch <= '9')
        {
            return true;
        } else {
            return false;
        }
    }

    char toLowerCase( char ch )
    {
        if( ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
        {
            return ch;
        }
        else {
            char convertToLower = ch - 'A' + 'a';
            return convertToLower;
        }
    }
public:
    bool isPalindrome(string s) {

        int start = 0;
        int end = s.length() - 1;

        while( start <= end)
        {
            if(!checkValidChar(s[start]))
            {
                start++;
            }
            else if (!checkValidChar(s[end]))
            {
                end--;
            } else if (toLowerCase(s[start]) != toLowerCase(s[end]))
            {
                return false;
            }
            else {
                start++;
                end--;
            }
        }
        return true;
        
    }
};