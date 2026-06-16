class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max = 0;
        for(int i =0; i<n;i++){
            int curr = 0;
            for(int j=n-1; j>i;j--){
                curr = min(heights[i],heights[j]) * (j-i);
                if(curr>max){
                max = curr;
            }
            }
            
        }
        return max;
    }
};
