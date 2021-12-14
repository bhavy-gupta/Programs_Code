/*
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;

public class Words_Frequency {
    public static void main(String[] args) {
        Map<String, Integer> map1 = new HashMap<>();
        try {
            Scanner file = new Scanner(new File("Words.txt"));
            while (file.hasNext()) {
                String word = file.next();
                Integer countWord = map1.get(word);
                if (countWord != null) {
                    countWord++;
                } else {
                    countWord = 1;
                }
                map1.put(word, countWord);
            }
            file.close();
            Iterator iterator = map1.entrySet().iterator();
            while (iterator.hasNext()) {
                System.out.println(iterator.next());
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
*/