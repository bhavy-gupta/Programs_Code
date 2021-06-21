import java.util.Scanner;

class Rectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double length, breadth, area, perimeter;
        System.out.println("Enter Length : ");
        length = sc.nextDouble();
        System.out.println("Enter Breadth : ");
        breadth = sc.nextDouble();
        area = length * breadth;
        System.out.println("Area of Rectangle = " + area);
        perimeter = 2 * (length + breadth);
        System.out.println("Perimeter of Rectangle = " + perimeter);
        sc.close();
    }
}