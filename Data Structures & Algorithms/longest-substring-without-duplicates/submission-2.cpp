class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        unordered_set<int> pp;
        int l=0, r=1;
        pp.insert(s[l]);
        int maxl = 1;
        while(r<s.length()){
            if(pp.find(s[r])!=pp.end()){
                pp.erase(s[l]);
                l=l+1;
            }
            else{
                if((r-l+1)>maxl) maxl = (r-l+1);
                pp.insert(s[r]);
                r++;
            }
        }
        return maxl;
    }
};
