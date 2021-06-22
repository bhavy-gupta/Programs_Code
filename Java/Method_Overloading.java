class Addition {
    int add(int x, int y) {
        return (x + y);
    }

    int add(int x, int y, int z) {
        return (x + y + z);
    }
}

class Method_Overloading {
    public static void main(String[] args) {
        int a = 10, b = 50, c = 15, res;
        Addition A1 = new Addition();
        res = A1.add(a, b);
        System.out.println("Result = " + res);
        res = A1.add(a, b, c);
        System.out.println("Result = " + res);
    }
}
