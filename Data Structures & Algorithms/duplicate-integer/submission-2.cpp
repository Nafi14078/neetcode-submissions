class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool count=false;
        if(nums.empty()){
            count=false;
        }
        else{
            sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count=true;
                break;
            }
            else{
                count=false;
                continue;
            }
        }

        }
        
        if(count==true){
            return true;
        }
        else{
            return false;
        }
        
    }
};