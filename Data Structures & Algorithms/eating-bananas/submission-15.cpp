class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {\
       int left = 1;
        int right = 0;
        
        // The maximum possible speed we ever need is the size of the largest pile
        for (int pile : piles) {
            right = max(right, pile);
        }
        
        int result = right;
        
        while (left <= right) {
            int k = left + (right - left) / 2; // Midpoint speed to test
            
            if (canFinish(piles, h, k)) {
                result = k;      // This speed works, record it
                right = k - 1;   // But let's see if we can go even slower
            } else {
                left = k + 1;    // Too slow, we need to eat faster
            }
        }
        
        return result;
    }
    
    bool canFinish (vector<int>& piles, int h, int k){
        long long time = 0;
        for(int pile : piles){
            time += (pile + k - 1LL) / k;
        }
        return time <= h;
    }
};
