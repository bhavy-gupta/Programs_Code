import java.util.Stack;

class Stack1 {
    public static void main(String[] args) {
        Stack<Integer> S1 = new Stack<Integer>();
        S1.push(10);
        S1.push(20);
        S1.push(30);
        S1.push(40);
        System.out.println(S1);
        S1.pop();
        S1.pop();
        System.out.println(S1);
    }
}