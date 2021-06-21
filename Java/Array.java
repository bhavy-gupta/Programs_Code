import java.util.Scanner;

class Array {
    public static void main(String args[]) {
        int arr[] = new int[5];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter Element arr[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        System.out.println("Array is : ");
        for (int i = 0; i < 5; i++) {
            System.out.println(" arr[" + i + "] : " + arr[i]);
        }
    }
}