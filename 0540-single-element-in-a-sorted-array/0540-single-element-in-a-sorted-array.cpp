class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int st = 0;
        int end = A.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            // Make mid even
            if (mid % 2 == 1)
                mid--;

            if (A[mid] == A[mid + 1]) {
                // Pair is correct, single element is on right
                st = mid + 2;
            }
            else {
                // Pair is broken, single element is on left
                end = mid;
            }
        }

        return A[st];
    }
};