// https://leetcode.com/problems/binary-search/submissions/1433979543/

class Solution {
public:
    int search(vector<int>& arr, int key) {
        int n = arr.size();
        int start=0,end=n-1,mid;

        while(start<=end)
        {
            mid = (start + (end-start)/2);
            if (arr[mid]==key)
            return mid;
            else if (arr[mid] < key)
            start = mid+1;
            else
            end=mid-1;
        }
    return -1;
        
    }
};
