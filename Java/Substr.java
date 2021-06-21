import java.util.Scanner;

class Substr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String : ");
        String s = sc.nextLine();
        int start, end;
        System.out.print("Index of Start : ");
        start = sc.nextInt();
        System.out.print("Index of End : ");
        end = sc.nextInt();
        String sub = s.substring(start, end);
        System.out.println(sub);
    }
}