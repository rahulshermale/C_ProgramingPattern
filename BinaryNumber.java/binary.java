import java.util.Arrays;
public class binary {
    public static void main(String[] args) {

        int num = 12;
        int arr[] = new int[10];
        for (int i = 0; num > 0; i++) {
            arr[i] = num % 2;
            num = num / 2;
        }
        // Arrays.reverse(arr);
      System.out.println(Arrays.toString(arr)) ;
    }
}