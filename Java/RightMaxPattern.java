import java.util.ArrayList;

class RightMaxPattern {
    public static void main(String[] args) {
        ArrayList<Integer> A1 = new ArrayList<Integer>();
        ArrayList<Integer> A2 = new ArrayList<Integer>();
        A1.add(1);
        A1.add(7);
        A1.add(31);
        A1.add(8);
        A1.add(1);
        System.out.println(A1);
        for (int i = 1; i < A1.size(); i++) {
            int max = A1.get(i);
            for (int j = i; j < A1.size(); j++) {
                if (A1.get(j) > max) {
                    max = A1.get(j);
                }
            }
            A2.add(max);
        }
        A2.add(-1);
        System.out.println(A2);
    }
}