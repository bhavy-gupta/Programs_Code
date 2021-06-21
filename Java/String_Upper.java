import java.util.Scanner;

class String_Upper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String : ");
        String s = sc.nextLine();
        s = s.toUpperCase();
        System.out.println("String in UpperCase : " + s);
    }
}