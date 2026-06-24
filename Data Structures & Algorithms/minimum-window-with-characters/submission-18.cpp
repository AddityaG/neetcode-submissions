class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length()) return "";
        int l = 0, r = 0;
        unordered_map<char,int> tCharMap;
        unordered_map<char,int> sCharMap;
        for(int i = 0; i<t.length();i++){
            tCharMap[t[i]]++;
        }
        
        auto isMatch = [&]() {
            for(auto const& [key, val] : tCharMap) {
                if(sCharMap[key] < val) return false;
            }
            return true;
        };

        string currMin = "";
        int currMinLen = s.length()+1;
        
        while(r < s.length()){
            if(tCharMap.count(s[r])){
                sCharMap[s[r]]++;
            }
            
            while(isMatch()){
                if((r-l+1)<currMinLen){
                    currMin = s.substr(l,r-l+1);
                    currMinLen = currMin.length();
                }
                if(tCharMap.count(s[l])){
                    sCharMap[s[l]]--;
                }
                l++;
            }
            r++;
        }
        return currMin;
    }
};