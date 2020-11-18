public class BubbleSort {
    public static void BubbleSort(int arr[]){

        int n1 = arr.length;

        for (int i = 0; i < n1 - 1; i++) {
            for (int j = 0; j < n1 - i - 1; j++) {
                if(arr[j] > arr[j + 1]){
                    //swap
                    int t = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = t;
                }
            }
        }
    }
}
