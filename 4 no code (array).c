public class ArrayReverse {
    public static void main(String[] args) {
        int[] arr = new int[10];
        for (int i = 0; i < 10; i++) {
            arr[i] = i + 1;
        }
        System.out.println("Original array:");
        for (int i = 0; i < 10; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println("\nReversed array:");
        for (int i = 9; i >= 0; i--) {
            System.out.print(arr[i] + " ");
        }
    }
}
