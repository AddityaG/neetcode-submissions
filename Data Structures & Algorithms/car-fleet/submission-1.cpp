class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<double,double>> pairy;
        stack<double> stacky;
        for(int i=0;i<position.size();i++){
            pairy.push_back({position[i],speed[i]});
        }
        sort(pairy.begin(),pairy.end());
        for(auto p: pairy){
            if(stacky.empty()) stacky.push((target-p.first)/p.second);
            else{
                double currTime  = ((target-p.first)/p.second);
                while(!stacky.empty() && stacky.top()<=currTime){
                    stacky.pop();
                }
                stacky.push(currTime);
            }
        }
        return stacky.size();
    }
};
