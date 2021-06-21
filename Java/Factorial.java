import java.util.Scanner;

class Factorial {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a Number : ");
		int n = sc.nextInt();
		int t = 1;
		for (int i = 1; i <= n; i++) {
			t = t * i;
		}
		System.out.println("Factorial of " + n + " = " + t);
	}
}