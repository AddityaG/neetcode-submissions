class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max = 0;
        int i = 0, j = n-1;
        while(j>i){
            int curr = min(heights[j],heights[i]) * (j-i);
            if(curr>max) max = curr;
            if(heights[j]<heights[i]) j--;
            else if(heights[j]<heights[i]) i++;
            else{
                i++;
            }
        }
        return max;
    }
};
