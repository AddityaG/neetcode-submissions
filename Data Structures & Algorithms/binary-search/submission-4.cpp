class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l = 0, r = nums.size();
        int x = -1;
        while(l<r && (r-l)>1){
            int x = (l+r)/2;
            cout<<"x: "<<x<<endl;
            if(target == nums[x]) return x;
            if(target > nums[x]) l = x+1;
            if(target < nums[x]) r = x-1;
        }
        if(l>=0){
            if(target==nums[l]) return l;
        }
        if(r<nums.size()){
            if(target==nums[r]) return r;
        }
        return -1;
    }
};
