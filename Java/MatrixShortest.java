import java.util.Scanner;
import java.util.ArrayList;

class MatrixShortest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] a = new int[10][10];

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                System.out.print("Enter Value at a[" + i + "][" + j + "] : ");
                a[i][j] = sc.nextInt();
            }
        }
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }
        System.out.print("Enter Starting Row : ");
        ArrayList ans = new ArrayList();
        int s = sc.nextInt();
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                a[j][s] = 0;
            }
            int max = 0, t = 0;
            for (int j = 0; j < 10; j++) {
                if (a[s][j] > max) {
                    max = a[s][j];
                    t = j;
                }
            }
            ans.add(s);
            s = t;
            /*
             * for (int j = 0; j < 10; j++) { a[j][s] = 0; }
             */
        }

        System.out.print(ans);
    }
}