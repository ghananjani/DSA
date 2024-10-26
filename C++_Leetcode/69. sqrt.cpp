// https://leetcode.com/problems/sqrtx/submissions/1434126917/
class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) // For 0 and 1, the square root is the number itself
            return x;

        int start = 1, end = x, ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Check if mid*mid is equal to x
            if (mid == x / mid) // Avoid overflow by dividing x by mid
                return mid;
            else if (mid < x / mid) { // Mid is too small
                ans = mid; // Store the closest approximation
                start = mid + 1;
            } else { // Mid is too large
                end = mid - 1;
            }
        }
        return ans;
    }
};
