//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int start=0, end=arr.size()-1, first=-1, last=-1, mid;

        // Find first occurrence
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                first = mid;
                end = mid - 1;  // Continue to search in the left half
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // Reset start and end for the second search
    start = 0;
    end = arr.size() - 1;

        // Find last occurrence
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                last = mid;
                start = mid + 1;  // Continue to search in the right half
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // Return both first and last positions
        return {first, last};  // Added missing semicolon here
    }
};  // Closing brace and semicolon for the class
