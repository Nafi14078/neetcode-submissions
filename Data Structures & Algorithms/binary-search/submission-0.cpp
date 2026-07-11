class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        while(high-low>1){
            mid=(high+low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            } 
        }
        if(nums[low]==target){
            return low;
        }
        else if(nums[high]==target){
            return high;
        }
        else{
            return -1;
        }
        
    }
};
