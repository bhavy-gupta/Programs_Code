import java.util.Scanner;

public class Array_Exception {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[5];
        System.out.print("Enter Size of Array : ");
        int n = sc.nextInt();
        try {
            for (int i = 0; i < n; i++) {
                System.out.print("Enter Element at arr[" + i + "] : ");
                arr[i] = sc.nextInt();
            }
        } catch (Exception e) {
            System.out.println("Exception Caught : " + e.toString());
        }
        sc.close();
    }
}
