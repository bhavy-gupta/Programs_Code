import java.util.*;

class Trash {
    public static void main(String args[]) {
        int dist = 0, back, front, m1 = 0, m2 = 0, ans = 0;
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int len = sc.nextInt();
            String s = sc.next();
            for (int j = 0; j < len; j++) {
                if (s.charAt(j) == '0') {
                    for (back = j; back >= 0; back--) {
                        if (s.charAt(back) == '1') {
                            m1 = j - back;
                            break;
                        }
                    }
                    for (front = j; front < len; front++) {
                        if (s.charAt(front) == '1') {
                            m2 = front - j;
                            break;
                        }
                    }
                    if (m1 <= m2 || j == len - 1) {
                        dist = m1;
                    } else {
                        dist = m2;
                    }
                    ans = ans + dist;
                }
            }
        }
        System.out.println(ans);
        sc.close();
    }
}