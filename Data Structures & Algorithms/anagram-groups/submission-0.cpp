class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mapp;
        vector<vector<string>> ans;
        int arrSize = 0;
        for(int i = 0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            if(mapp.count(temp)){
                ans[mapp[temp]].push_back(strs[i]);
            }
            else{
                ans.push_back({strs[i]});
                mapp.insert({temp,arrSize});
                arrSize++;
            }
        }
        return ans;
    }
};
