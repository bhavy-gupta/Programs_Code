import java.util.Scanner;

class Greatest_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Size of Array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter Elements of Array  ");
        for (int i = 0; i < n; i++) {
            System.out.print(" Enter Element at arr[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        int s = arr[0], g = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] > g) {
                g = arr[i];
            }
            if (arr[i] < s) {
                s = arr[i];
            }
        }
        System.out.println("\nGreatest = " + g);
        System.out.println("Smallest = " + s);
        sc.close();
    }
}
