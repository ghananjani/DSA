public class insertionsort {
    public static void main(String[] args) {
        int arr[] = {2,3,6,5,7,9,1};

        for (int i = 1; i < arr.length;i++){
            int temp = arr[i];
            int j = i-1;

            while(j>=0 && arr[j] > temp)
            {
                arr[j+1] = arr[j];
                j--;
            }

    for (int num:arr)
            {
                System.out.println(num + " ");
            }
        }
    }
}
