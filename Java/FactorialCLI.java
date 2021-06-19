//import java.io.*;

class FactorialCLI {
	public static void main(String args[]) {
		int n = Integer.parseInt(args[0]);
		int t = 1;
		for (int i = 1; i <= n; i++) {
			t *= i;
		}
		System.out.println("Factorial of " + n + " = " + t);
	}
}