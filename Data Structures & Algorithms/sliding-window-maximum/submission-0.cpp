class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int l=0,r=k-1;
        while(r<nums.size()){
            int currMax = nums[l];
            for(int i=l;i<=r;i++){
                if(nums[i]>currMax){
                    currMax = nums[i];
                }
            }
            ans.push_back(currMax);
            r++;l++;
        }
        return ans;
    }
};
