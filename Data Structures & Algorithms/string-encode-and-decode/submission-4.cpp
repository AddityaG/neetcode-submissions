class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string ans = "";
        for(int i = 0; i<strs.size(); i++){
            ans = ans + to_string(strs[i].size()) + '#' + strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        if(s.size()==0) return {};
        vector<string> ans;
        int i=0;
        while(i<s.length()){
            string currSize = ""; 
            while(s[i]!='#'){
                currSize = currSize + s[i];
                i++;
            }
            i++;
            int curr = stoi(currSize);
            string currs = s.substr(i,curr);
            i = i+curr;
            ans.push_back(currs);
        }
        return ans;
    }
};
