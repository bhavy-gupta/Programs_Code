import java.io.*;

class Prime {
	public static void main(String args[]) {
		int n = Integer.parseInt(args[0]);
		int c = 0;
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				c++;
			}
		}
		if (c == 0) {
			System.out.println(n + " is a Prime Number");
		} else {
			System.out.println(n + " is not a Prime Number");
		}
	}
}