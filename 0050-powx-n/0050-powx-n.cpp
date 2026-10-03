class Solution {
public:
    double myPow(double x, int n) {

        long long bf = n;
        
        long double base = x;
        
        if(bf < 0)
        {
            base = 1.0L / base;
            bf = -bf;
        }

        long double ans = 1.0L;

        while(bf > 0)
        {
            if(bf % 2 == 1)
            {
                ans *= base;
            }

            base *= base;
            bf /= 2;
        }

        return (double)ans;
    }
};