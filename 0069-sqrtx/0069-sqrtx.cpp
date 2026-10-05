class Solution {
public:
    int mySqrt(int x) {

        int st = 0;
        int end = x;
        int ans = 0;

        while(st<=end)
        {
            long long mid = st + (end-st)/2;
            if(mid*mid <= x)
            {
                ans = mid;
                st = mid + 1;
            }

            else
            {
                end = mid -1;
            }
        }
      return ans;  
    }
};