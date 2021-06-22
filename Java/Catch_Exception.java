import java.util.Scanner;

class Catch_Exception {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, res;
        System.out.println("Enter Value of A : ");
        a = sc.nextInt();
        System.out.println("Enter Value of B : ");
        b = sc.nextInt();
        try {
            res = a / b;
            System.out.println("Result = " + res);
        } catch (Exception e) {
            System.out.println("Exception Caught : " + e);
            
        }
        sc.close();
    }
}
