// https://leetcode.com/problems/kth-missing-positive-number/submissions/1434507451/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, end = arr.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Calculate the number of missing elements before arr[mid]
            if (arr[mid] - (mid + 1) >= k) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        // Calculate the k-th missing element
        return start + k;
    }
};
