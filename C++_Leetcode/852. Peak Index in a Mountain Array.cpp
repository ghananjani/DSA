//https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/1434458782/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size() - 1;

        while (start < end) { // Only run while start < end to avoid out-of-bounds errors
            int mid = start + (end - start) / 2;

            // Check if mid is in the increasing part of the mountain
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1; // Move to the right part of the array
            } else {
                end = mid; // Move to the left part of the array, or mid might be the peak
            }
        }

        // start and end will converge at the peak index
        return start;
    }
};
