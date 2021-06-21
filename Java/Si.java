import java.util.Scanner;

public class Si {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int principle, time;
        float rate, si;
        System.out.println("Enter Principle : ");
        principle = sc.nextInt();
        System.out.println("Enter Rate of Interest : ");
        rate = sc.nextFloat();
        System.out.println("Enter Time in years : ");
        time = sc.nextInt();
        si = principle * rate * time / 100;
        System.out.println("Simple Interest = " + si);
    }
}