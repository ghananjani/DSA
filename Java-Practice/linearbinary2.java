public class demo {
    public static void main(String[] args) {
        int nums[] = {1,2,3,4,5,7,9,11,13};
        int target = 11;
        int result1 = linearSearch(nums, target);
        int result2 = binarySearch(nums, target);

        
        if (result1 != -1)
            System.out.println("element found at index: " + result1);
        else 
        System.out.println("element not found");
    }
    public static int linearSearch(int[] nums, int target) {
        int steps = 0;
        for(int i=0;i<nums.length;i++){
            steps++;
            if(nums[i] == target){
            System.out.println("steps by linear:" + steps);
            return i;
            }
    }
        System.out.println("steps by linear:" + steps);
        return -1;
    }

    public static int binarySearch(int[] nums, int target) {
        int steps = 0;
        int left = 0;
        int right = nums.length-1;

        while(left <=right) {
            steps++;
            int mid = (left + right)/2;

            if (nums[mid] == target) {
                System.out.println("steps by binary:" + steps);
                return mid;
            }
            else if(nums[mid] < target) {
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        return -1;
    }
}
