class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        int target=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                target++;
            }
            else{
                continue;
            }
        }
        v.push_back(target);
        return v;
        
    }
};