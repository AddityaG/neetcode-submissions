class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            if(count.find(nums[i])!=count.end()){
                count[nums[i]]+=1;
            }
            else{
                count.insert({nums[i],1});
            }
        }
        vector<pair<int,int>> countPair;
        for(auto it: count){
            countPair.push_back({it.second,it.first});
        }
        sort(countPair.begin(),countPair.end());
        vector<int> ans;
        for(int i=countPair.size()-1; i > (int)countPair.size() - 1 - k; i--){
            ans.push_back(countPair[i].second);
        }
        return ans;
    }
};
