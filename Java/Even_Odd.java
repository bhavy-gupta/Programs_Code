//import java.io.*;

class Even_Odd {
    public static void main(String args[]) {
        int n = Integer.parseInt(args[0]);
        if (n % 2 == 0) {
            System.out.println(n + " is Even Number");
        } else {
            System.out.println(n + " is Odd Number");
        }
    }
}