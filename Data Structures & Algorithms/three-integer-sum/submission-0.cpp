class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i-1>=0 && nums[i-1] == nums[i]){
                continue;
            }
            int l = i+1;
            int r = nums.size()-1;
            int target = -1 * nums[i];
            while(r>l){
                if((r+1 <= nums.size()-1) && (nums[r] == nums[r+1])){
                    r = r-1;
                    continue;
                }
                if((l-1 >= i+1) && (nums[l-1] == nums[l])){
                    l = l+1;
                    continue;
                }
                if(nums[l]+nums[r] == target){
                    ans.push_back({nums[i], nums[r], nums[l]});
                    r--;
                    l++;
                }
                if(nums[l]+nums[r] > target) r = r-1;
                if(nums[l]+nums[r] < target) l = l+1;
            }
        }
        return ans;
    }
};
