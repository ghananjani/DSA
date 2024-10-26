//https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/1434483401/

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Check if mid is the target
            if (arr[mid] == target) {
                return mid;
            }

            // Check if the left half is sorted
            if (arr[start] <= arr[mid]) {
                // Target is in the left half
                if (arr[start] <= target && target < arr[mid]) {
                    end = mid - 1;
                } else { // Target is in the right half
                    start = mid + 1;
                }
            } 
            // Otherwise, the right half must be sorted
            else {
                // Target is in the right half
                if (arr[mid] < target && target <= arr[end]) {
                    start = mid + 1;
                } else { // Target is in the left half
                    end = mid - 1;
                }
            }
        }

        // If the target is not found
        return -1;
    }
};
