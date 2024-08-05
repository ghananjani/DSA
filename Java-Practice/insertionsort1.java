public class sorting1 
{
    public static void InsertionSort(int[] arr) {

            int n = arr.length;
        
            for (int i = 1; i < n; i++) {
                int key = arr[i];
                int j = i - 1;
        
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j = j - 1;
                }
                arr[j + 1] = key;
            }
        }

        public static void main (String[] args) {
            int arr[] = {7,3,9,2,4,1,8,5,6};
            System.out.println("Before Insertion Sort");
            for(int i=0;i<arr.length;i++){
                System.out.print(arr[i]+" ");
            }

            System.out.println();
    
            InsertionSort(arr);
            System.out.println("After Insertion sort");
            for(int i=0; i<arr.length; i++){
                System.out.print(arr[i] + " ");
            }
    }
    }
    

