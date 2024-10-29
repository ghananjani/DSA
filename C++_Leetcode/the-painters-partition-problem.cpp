//https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
class Solution {
  public:
    long long minTime(int A[], int n, int k) {
        // Edge case: If there are more painters than boards, each painter paints one board
        if (k > n) return *max_element(A, A + n);
        
        // Define search range: start as max of board lengths, end as sum of board lengths
        long long start = *max_element(A, A + n);
        long long end = 0;
        for (int i = 0; i < n; i++) {
            end += A[i];
        }
        
        long long ans = end;
        
        // Perform binary search to find the minimum feasible max time
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            
            // Calculate required painters for current max time 'mid'
            int paintersRequired = 1;
            long long currentSum = 0;
            for (int i = 0; i < n; i++) {
                currentSum += A[i];
                
                // If adding this board exceeds mid, assign to new painter
                if (currentSum > mid) {
                    paintersRequired++;
                    currentSum = A[i];
                }
                
                // If painters required exceeds available painters, stop checking further
                if (paintersRequired > k) {
                    break;
                }
            }
            
            // Adjust binary search bounds based on painter requirement
            if (paintersRequired <= k) {
                ans = mid;    // Possible solution found, try smaller max time
                end = mid - 1;
            } else {
                start = mid + 1;  // Increase max time limit to reduce required painters
            }
        }
        
        return ans;
    }
};
