class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapp;

        for(int i=0;i<nums.size();i++){
            int req = target-nums[i];
            if(mapp.find(req) != mapp.end())
                return {mapp[req],i};
            mapp.insert({nums[i],i});
        }
        return {};        
    }
};
