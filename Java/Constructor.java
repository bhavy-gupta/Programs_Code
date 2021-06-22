class Rectangle {
    int len, bre, area;

    Rectangle() {
        len = bre = 0;
    }

    Rectangle(int l, int b) {
        len = l;
        bre = b;
    }

    void calculate_area() {
        area = len * bre;
    }

    void display() {
        System.out.println("Length = " + len);
        System.out.println("Breadth = " + bre);
        System.out.println("Area = " + area);
    }
}

class Constructor {
    public static void main(String[] args) {
        Rectangle R1 = new Rectangle(5, 10);
        R1.calculate_area();
        R1.display();
    }
}