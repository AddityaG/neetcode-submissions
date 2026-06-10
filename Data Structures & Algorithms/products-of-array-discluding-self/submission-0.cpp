class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int nonZeroMult = 1;
        int zeroCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(zeroCount == 1){
                    vector<int> ans(nums.size(),0);
                    return ans;
                }
                zeroCount+=1;
            }
            else{
                nonZeroMult*=nums[i];
            }
        }

        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
            if(zeroCount){
                if(nums[i]!=0)
                    ans.push_back(0);
                else
                    ans.push_back(nonZeroMult);
            }
            else{
                ans.push_back(nonZeroMult/nums[i]);
            }
        }
        return ans;
    }
};
