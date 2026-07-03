class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> stacky;
        int max = 0;
        for(int i=0;i<heights.size();i++){
            int index = i;
            while(!stacky.empty() && stacky.top().second>heights[i]){
                index = stacky.top().first;
                int curr = (i-index) * stacky.top().second;
                if(curr>max) max = curr;
                stacky.pop();
            }
            stacky.push({index, heights[i]});
        }
        while(!stacky.empty()){
            int index = stacky.top().first;
            int curr = (heights.size()-index) * stacky.top().second;
            if(curr>max) max = curr;
            stacky.pop();
        }
        return max;
    }
};
