class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> map1;
        unordered_set<int> set1;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            set1.insert(nums[i]);
        }
        int max = 0;
        while(!set1.empty()){
            auto it = set1.begin();
            int x = *it;
            int curr = 1;
            find(x,curr,set1);
            if(curr>max) max = curr;
        }
        return max;
    }

    void find (int x, int &y, unordered_set<int> &set1){
        set1.erase(x);
        if(set1.find(x-1)!=set1.end()){
            y = y + 1;
            find(x-1,y,set1);
        }
        if(set1.find(x+1)!=set1.end()){
            y = y + 1;
            find(x+1,y,set1);
        }
    }
};
