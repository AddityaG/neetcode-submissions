class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        
        for(int i=0;i<s.length();i++){
            if(map1.find(s[i])!=map1.end()){
                map1[s[i]] = map1[s[i]] + 1;
            } else{
                map1[s[i]] = 1;
            }

            if(map2.find(t[i])!=map2.end()){
                map2[t[i]] = map2[t[i]] + 1;
            } else{
                map2[t[i]] = 1;
            }
        }

        for(auto it = map1.begin(); it != map1.end(); it++){
            if(map2[it->first]!=it->second){
                return false;
            }
        }
        return true;
    }
};
