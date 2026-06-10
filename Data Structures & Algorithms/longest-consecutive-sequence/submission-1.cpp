class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int currMax = 1;
        int curr = 1;
        unordered_set<int> numSet;
        for(int i=0;i<nums.size();i++){
            if(!numSet.count(nums[i]))
                numSet.insert(nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            if(numSet.count(nums[i])){
                numSet.erase(nums[i]);
                curr = count(numSet,1,nums[i]);
                if(curr>currMax) currMax = curr;
            }
        }
        return currMax;

    }

    int count(unordered_set<int> &numSet, int curr, int num){
        if(numSet.count(num-1)){
            numSet.erase(num-1);
            curr+=1;
            curr+=count(numSet,0,num-1);
        }
        if(numSet.count(num+1)){
            numSet.erase(num+1);
            curr+=1;
            curr+=count(numSet,0,num+1);
        }
        return curr;
    }
};
