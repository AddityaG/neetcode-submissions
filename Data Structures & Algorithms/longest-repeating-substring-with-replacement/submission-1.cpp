class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.length()==0) return 0;
        unordered_set<char> set1(s.begin(), s.end());
        int res=0;
        // for(int i=0;i<s.length();i++){
        //     set1.insert(s[i]);
        // }
        for(char c: set1){
            int count = 0, l=0;
            for(int r=0; r<s.length();r++){
                if(s[r] == c){
                    count++;
                }

                while((r-l+1) - count > k){
                    if(s[l]==c){
                        count--;
                    }
                    l++;
                }
                res = max (res, (r-l+1));
            }
        }
        return res;
    }
};
