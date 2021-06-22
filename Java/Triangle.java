import java.util.Scanner;

class Area {
    int base, height;
    double area;

    Area() {
        base = height = 0;
    }

    void calculate_area(int b, int h) {
        area = 0.5 * b * h;
        System.out.println("Area of Triangle = " + area);
    }
}

class Triangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Base : ");
        int base = sc.nextInt();
        System.out.print("Enter Height : ");
        int height = sc.nextInt();
        Area A1 = new Area();
        A1.calculate_area(base, height);
        sc.close();
    }
}
