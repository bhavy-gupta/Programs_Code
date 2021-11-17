import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

class ByteStream {
    public static void main(String args[]) {
        try {   
            FileOutputStream file = new FileOutputStream("ByteFile.txt");
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter String : ");
            String s = sc.nextLine();
            byte b[] = s.getBytes();
            file.write(b);
            file.close();
            sc.close();
        } catch (IOException e) {
            System.out.println(e);
        }
    }
}
