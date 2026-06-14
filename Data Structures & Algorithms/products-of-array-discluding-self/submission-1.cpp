class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mult = 1;
        int zeroCount = 0;
        int zeroLocation = -1;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]!=0){
                mult*=nums[i];
            }
            if(nums[i] == 0){
                zeroCount++;
                zeroLocation = i;
            }
        }
        if(zeroCount>=1){
            vector<int> arr(nums.size());
        if(zeroCount == 1){   
            arr[zeroLocation] = mult;
            
        }
        return arr;
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = mult/nums[i];
        }
        return nums;
    }
};
