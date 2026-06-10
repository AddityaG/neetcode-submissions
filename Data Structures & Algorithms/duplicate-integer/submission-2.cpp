class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int arr[nums.size()];
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size(); i++){
            cout<< nums [i] << "  " << nums[i-1]<< endl;
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};