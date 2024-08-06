public class sorting2 {
    
public static void selectionSort(int[] arr) {
    int n = arr.length;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
public static void main (String[] args) {
    int arr[] = {7,3,9,2,4,1,8,5,6};
    System.out.println("Before Selection Sort");
    for(int i=0;i<arr.length;i++){
        System.out.print(arr[i]+" ");
    }

    System.out.println();

    selectionSort(arr);
    System.out.println("After Selection sort");
    for(int i=0; i<arr.length; i++){
        System.out.print(arr[i] + " ");
    }
}
}

