class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int storedWater = 0;
        for(int i=1;i<n-1; i++){
            int leftMaxHeight= height[i], rightMaxHeight = height[i];
            int x = i-1, y=i+1;
            while(x>=0){
                if(height[x]>leftMaxHeight) leftMaxHeight = height[x];
                x--;
            }
            while(y<=n-1){
                if(height[y]>rightMaxHeight) rightMaxHeight = height[y];
                y++;
            }
            if (min(rightMaxHeight, leftMaxHeight) > height[i]) storedWater+=min(rightMaxHeight, leftMaxHeight) - height[i];
        }
        return storedWater;
    }
};
