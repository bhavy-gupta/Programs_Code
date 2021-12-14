import java.awt.*;
import java.awt.event.*;

public class Factorial_Awt implements ActionListener {
    Label l1 = new Label("Enter a Number = ");
    TextField tf1 = new TextField(20);
    TextField tf2 = new TextField(20);
    Button b1 = new Button("Compute");
    Frame f1 = new Frame("Factorial");

    Factorial_Awt() {
        l1.setBounds(30, 50, 100, 20);
        tf1.setBounds(150, 50, 50, 20);
        b1.setBounds(30, 90, 150, 20);
        b1.addActionListener(this);
        tf2.setBounds(30, 130, 150, 20);
        f1.setSize(300, 300);
        f1.setLayout(null);
        f1.setVisible(true);
        f1.add(l1);
        f1.add(tf1);
        f1.add(b1);
        f1.add(tf2);
    }

    public void actionPerformed(ActionEvent e) {
        if (b1 == e.getSource()) {
            int n = Integer.parseInt(tf1.getText());
            int fact = 1;
            for (int i = n; i >= 2; i--) {
                fact = fact * i;
            }
            tf2.setText("Factorial of " + n + " = " + fact);
            System.out.println(fact);
        }
    }

    public static void main(String[] args) {
        new Factorial_Awt();
    }
}