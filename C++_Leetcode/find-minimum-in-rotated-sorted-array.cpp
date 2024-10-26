//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/1434473266/

class Solution {
public:
    int findMin(vector<int>& arr) {
        int start = 0, end = arr.size() - 1, ans = arr[0];

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // If the subarray from start to end is already sorted, the minimum is at start
            if (arr[start] <= arr[end]) {
                ans = min(ans, arr[start]);
                break;
            }

            // Update the answer if the current mid element is smaller
            ans = min(ans, arr[mid]);

            // Decide which part to search next
            if (arr[mid] >= arr[start]) {
                start = mid + 1; // Minimum must be in the right half
            } else {
                end = mid - 1; // Minimum must be in the left half
            }
        }
        return ans;
    }
};
