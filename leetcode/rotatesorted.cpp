class Solution {
public:
    int findMin(vector<int>& nums) {

        int low = 0;
        int n = nums.size();
        int high = nums.size() - 1;
        int mid;
        int target = INT_MAX;
        
        while(low <= high)
        {
            mid = low + (high-low)/2;
            // The min val wont be present in sorted half
            if(nums[mid] >= nums[low])
            {   
                target = min(target,nums[low]); // Storing the min value as it can get changed
                low = mid+1;
            }
            else 
            {   
                target = min(target,nums[mid]);
                high = mid-1;
                

            }
            

        }
        return target;
        
    }
};