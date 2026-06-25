class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int l=1;
        int maxloc = 0, maxval=nums[0];
        for(int i=1;i<k;i++){
            if(nums[i]>maxval){
                maxval=nums[i];
                maxloc=i;
            }
        }
        ans.push_back(maxval);
        for(int r=k;r<nums.size();r++){
            cout<<maxval<<" "<<maxloc<<endl;
            cout<<"----"<<l<<"  "<<r<<endl;
            if(maxloc<l){
                maxloc = l;
                maxval=nums[l];
                for(int i=l+1;i<=r;i++){
                    if(nums[i]>maxval){
                        maxval=nums[i];
                        maxloc=i;
                    }
                }
            }
            else{
                if(nums[r]>maxval){
                    maxval=nums[r];
                    maxloc=r;
                }
            }
            ans.push_back(maxval);
            l++;
        }
        return ans;
    }
};
