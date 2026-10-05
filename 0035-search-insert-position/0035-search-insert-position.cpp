class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int n = nums.size();
        int end = n-1;
        
        while(st <= end)
        {
           int mid = st + (end-st)/2;

           if (target > nums[mid])
           {
            st = mid +1;
           }

           else if(target < nums[mid])
           {
            end = mid -1;
           }

           else
           {
            return mid;
           }
        }

        return st;
    }
};