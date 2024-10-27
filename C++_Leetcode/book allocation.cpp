//https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
class Solution {
  public:
    // Function to find minimum number of pages.
    long long findPages(int n, int A[], int m) {
        // code here
        
        if (m>n)
        return -1;
        
        int start=0, end=0, mid, ans;
        for (int i = 0; i<n;i++)
        {
            start = max(start,A[i]);
            end += A[i];
        }
        
        while (start<=end){
            mid = start+(end-start)/2;
            int pages=0, count=1;
            for(int i=0;i<n;i++)
            {
                pages += A[i];
                if(pages>mid)
                {
                    count++;
                    pages=A[i];
                }
            }
            
            if (count<=m)
            {
                ans = mid;
                end = mid-1;
            }
            
            else
            start = mid+1;
        }
        return ans;
    }
};
