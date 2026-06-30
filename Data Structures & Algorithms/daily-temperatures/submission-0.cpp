class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<pair<int,int>> stacky;
        for(int i = 0; i<temperatures.size(); i++){
            while(!stacky.empty() && stacky.top().first<temperatures[i]){
                ans[stacky.top().second] = (i-stacky.top().second);
                stacky.pop();
            }
            stacky.push({temperatures[i],i});
        }
        return ans;
    }
};
