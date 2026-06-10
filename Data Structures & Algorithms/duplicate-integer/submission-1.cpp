class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> pp;
        for(int i=0; i<nums.size(); i++){
            if(pp.find(nums[i]) != pp.end()){
                return true;
            }
            pp.insert(nums[i]);
        }
        return false;
    }
};