import java.util.Scanner;

class ArraySearch {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i, ele, size, a[], pos = -1;
        System.out.print("Enter the size of Array = ");
        size = sc.nextInt();
        a = new int[size];
        System.out.println("Enter the Elements in Array = ");
        for (i = 0; i < size; i++) {
            System.out.print("a[" + i + "] = ");
            a[i] = sc.nextInt();
        }

        System.out.print("Enter the Element to Search = ");
        ele = sc.nextInt();
        for (i = 0; i < size; i++) {
            if (a[i] == ele) {
                System.out.println("Element Found");
                System.out.println("Index = " + i);
                pos = i + 1;
                System.out.println("Position = " + pos);
            }
        }
        if (pos == -1)
            System.out.println("Element NOT Found");
        sc.close();
    }
}
