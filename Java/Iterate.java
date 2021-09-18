import java.util.*;

class Iterate {
    public static void main(String[] args) {
        Collection<Integer> c1 = new ArrayList<Integer>();
        c1.add(10);
        c1.add(20);
        c1.add(50);
        c1.add(70);
        Iterator<Integer> itr = c1.iterator();
        System.out.println("Collection is : ");
        while (itr.hasNext()) {
            System.out.println(itr.next());
        }
    }
}