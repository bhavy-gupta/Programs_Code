import java.io.FileReader;
import java.util.*;

class Frequency_Words {
    public static void main(String args[]) {
        int x;
        String s = "";
        try {
            FileReader fr = new FileReader("Words.txt");
            while ((x = fr.read()) != -1) {
                char a = (char) x;
                s = s + a;
            }
            fr.close();
            // System.out.println(s);
            String[] words = s.split(" ");
            Set<String> set = new HashSet<>();
            ArrayList<String> arr = new ArrayList<>();
            for (String t : words) {
                set.add(t);
            }
            System.out.println(set);
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}