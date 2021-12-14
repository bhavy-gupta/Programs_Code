import java.awt.*;
import java.awt.event.*;

class Calculator_GUI implements ActionListener {
    Button b1, b2, b3, b4;
    TextField t1, t2, t3;
    Label lb1, lb2, lb3;
    Frame f;

    Calculator_GUI() {
        f = new Frame("Arithmetic Operation Perform");
        lb1 = new Label("Enter First Number :");
        lb1.setBounds(15, 50, 150, 30);
        f.add(lb1);
        t1 = new TextField();
        t1.setBounds(200, 50, 150, 30);
        f.add(t1);
        t2 = new TextField();
        t2.setBounds(200, 80, 150, 30);
        f.add(t2);
        t3 = new TextField();
        t3.setBounds(200, 140, 150, 30);
        f.add(t3);
        lb2 = new Label("Enter Second Number :");
        lb2.setBounds(15, 80, 150, 30);
        f.add(lb2);
        lb3 = new Label("Result :");
        lb3.setBounds(90, 140, 150, 30);
        f.add(lb3);
        b1 = new Button("Addition");
        b1.setBounds(90, 200, 100, 30);
        b2 = new Button("Substraction");
        b2.setBounds(90, 250, 100, 30);
        b3 = new Button("Divison");
        b3.setBounds(90, 300, 100, 30);
        b4 = new Button("Multiplication");
        b4.setBounds(90, 350, 100, 30);
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        f.setLayout(null);
        f.setSize(500, 500);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        int a = Integer.parseInt(t1.getText());
        int b = Integer.parseInt(t2.getText());
        int c = 0;
        if (e.getSource().equals(b1)) {
            c = a + b;
            t3.setText(String.valueOf(c));
        } else if (e.getSource().equals(b2)) {
            c = a - b;
            t3.setText(String.valueOf(c));
        } else if (e.getSource().equals(b3)) {
            c = a / b;
            t3.setText(String.valueOf(c));
        } else if (e.getSource().equals(b4)) {
            c = a * b;
            t3.setText(String.valueOf(c));
        }
    }

    public static void main(String args[]) {
        new Calculator_GUI();
    }
}
