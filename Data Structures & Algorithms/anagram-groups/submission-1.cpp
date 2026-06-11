class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,int> index;
        for(int i=0;i<strs.size();i++){
            string copy = strs[i];
            sort(copy.begin(), copy.end());
            if(index.find(copy)!=index.end()){
                ans[index[copy]].push_back(strs[i]);
            }
            else{
                ans.push_back({strs[i]});
                index.insert({copy,ans.size()-1});
            }
        }
        return ans;
    }
};
