class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowCount = matrix.size();
        int colCount = matrix[0].size();
        int l = 0, r = rowCount-1;
        cout<<l<<" " << r<<endl;
        if(l==r){
            if(search(matrix[l], target)>=0) return true;
            return false;
        }
        int mid = 0;
        while(l<r){
            if(r-l  == 1){
                if(matrix[r][0]>target){
                    mid = l;
                    break;
                }
                else{
                    mid = r;
                    break;
                }
            }
            else{
                mid = ((l+r)/2);
                if(matrix[mid][0]>target) r = mid;
                else if(matrix[mid][0]<target) l = mid;
                else return true;
            }
        }
        cout<<l<<" "<<r<<" "<<mid<<endl;
        if(search(matrix[mid], target)>=0) return true;
        return false;
    }

    int search(vector<int>& nums, int target) {
        
        int l = 0, r = nums.size()-1;
        int x = -1;
        while(l<r && (r-l)>1){
            x = (l+r)/2;
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
