import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

class ByteStream {
    public static void main(String args[]) {
        try {
            FileOutputStream fout = new FileOutputStream("demo.txt");
            Scanner sc = new Scanner(System.in);
            // String s = "Welcome to GFG! This is an example of Java program to write Bytes
            // using ByteStream.";
            System.out.print("Enter String : ");
            String s = sc.nextLine();
            byte b[] = s.getBytes();
            fout.write(b);
            fout.close();
            sc.close();
        } catch (IOException e) {
            System.out.println(e);
        }
    }
}
