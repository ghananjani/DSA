public class demo {
    public static void main(String[] args) {
        int nums[] = {5,7,9,11,13};
        int target = 11;
        int result = linearSearch(nums, target);
        
        if (result != -1)
            System.out.println("element found at index: " + result);
        else 
        System.out.println("element not found");
    }
    public static int linearSearch(int[] nums, int target) {
        return -1;
    }
}
