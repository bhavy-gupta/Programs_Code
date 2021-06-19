import java.io.*;

class Fibo {
	public static void main(String args[]) {
		int i, n1 = 0, n2 = 1, sum;
		System.out.print(n1 + " , " + n2);
		for (i = 1; i <= 10; i++) {
			sum = n1 + n2;
			System.out.print(" , " + sum);
			n1 = n2;
			n2 = sum;
		}
	}
}
