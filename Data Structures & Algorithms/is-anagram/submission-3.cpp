class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length())
            return false;
        int charCount1[26] = {0};
        int charCount2[26] = {0};
        for(int i=0;i<s.length();i++){
            charCount1[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            charCount2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(charCount1[i]!=charCount2[i])
                return false;
        }
        return true;
    }
};
