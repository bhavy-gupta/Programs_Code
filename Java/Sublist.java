import java.util.*;

class Sublist {
    public static void main(String[] args) {
        ArrayList<Integer> al = new ArrayList<Integer>();
        al.add(3);
        al.add(5);
        al.add(7);
        al.add(9);
        al.add(11);
        al.add(20);
        System.out.println(al);
        List<Integer> sl = al.subList(2, 4);
        System.out.println(sl);
    }
}