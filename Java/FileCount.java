import java.io.FileReader;

class FileCount {
  public static void main(String[] args) {
    int x, ch = 0, li = 1, word = 1;
    try {
      FileReader fr = new FileReader("File.txt");
      while ((x = fr.read()) != -1) {
        ch++;
        if ((char) x == '\n')
          li++;
        if ((char) x == ' ')
          word++;
      }
      fr.close();
      System.out.println("Number of Characters : " + ch);
      System.out.println("Number of Line : " + li);
      System.out.println("Number of Words : " + word);
    } catch (Exception e) {
      System.out.println("Error : " + e);
    }
  }
}
