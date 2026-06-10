class Solution {
public:
    bool isAnagram(string s, string t) {
        int charCount1[26] = {0};
        int charCount2[26] = {0};
        for(int i=0;i<s.length();i++){
            charCount1[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            charCount2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            cout<<"i: "<< i<< ", Count: "<< charCount1[i]<<","<<charCount2[i]<<endl;
            if(charCount1[i]!=charCount2[i])
                return false;
        }
        return true;
    }
};
