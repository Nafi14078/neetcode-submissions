class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end());
            int a = (stones[stones.size() - 1]) - (stones[stones.size() - 2]);
            stones.pop_back();
            stones.pop_back();
            if (a > 0) {
                stones.push_back(a);
            }
        }
        if (stones.size() == 0) {
            return 0;
        } else {
            return stones[0];
        }
    }
};