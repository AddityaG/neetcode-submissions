class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        unordered_map<char,int> charMap;
        
        for(int i=0; i<s1.length();i++){
            if(charMap.find(s1[i])!=charMap.end()) charMap[s1[i]]++;
            else{
            charMap.insert({s1[i],1});
            }
        }
        int n = s2.length();
        int l=0,r=s1.length()-1;
        int charCount[26] = {0};
        for(int i = 0; i<=r; i++){
            charCount[s2[i]-'a']++;
        }
        while(r<n){
            for(int i = l; i<=r; i++)
            {
                if(charMap[s2[i]] != charCount[s2[i]-'a']){
                    if(r+1>=s2.length()) return false;
                    charCount[s2[l]-'a']--;
                    charCount[s2[r+1]-'a'] ++ ;
                    break;
                }
                if(i==r) return true;
            }
            l++;r++;
        }
        return false;
    }
};
