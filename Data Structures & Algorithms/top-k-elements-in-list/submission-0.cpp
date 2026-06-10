class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(map1.count(nums[i])){
                map1[nums[i]] = map1[nums[i]]+1;
            }
            else{
                map1.insert({nums[i],1});
            }
        }
        vector<pair<int,int>> temp;
        for(auto it = map1.begin();it != map1.end();it++){
            temp.push_back({it->second,it->first});
            cout<<"1. "<<it->first<<" 2. "<<it->second<<endl;
        }
        sort(temp.begin(),temp.end());
        int size = temp.size();
        for(int i=temp.size()-1;i>size-k-1;i--){
            cout<<"ppp";
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};
