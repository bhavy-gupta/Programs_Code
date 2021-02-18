import java.io.File;
import java.util.Scanner;

class Main {
  public static void main(String[] args) {

    int count = 0; // For Counting Number of Lines
    int len = 0, temp; // For Counting Maximum Length
    String line; // For getting copy of Line

    try {
      // create a new file object
      File file = new File("file.txt"); // replace file.txt with your File Name

      // create an object of Scanner
      // associated with the file
      Scanner sc = new Scanner(file);

      // read each line and
      // count number of lines
      while (sc.hasNextLine()) {
        line = sc.nextLine();
        temp = line.length();
        if (len < temp) {
          len = temp;
        }
        count++;
      }
      System.out.println("The File Contains " + count + " Lines .");
      System.out.println("The Longest Line Contains " + len + "Characters .");

      // close scanner
      sc.close();
    } catch (Exception e) {
      e.getStackTrace();
    }
  }
}