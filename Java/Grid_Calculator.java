import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class Grid_Calculator implements ActionListener {
    JFrame f = new JFrame();
    JTextField t1 = new JTextField();
    JTextField t2 = new JTextField();
    JTextField t3 = new JTextField();
    JButton b4 = new JButton("+");
    JButton b5 = new JButton("-");
    JButton b6 = new JButton("*");

    Grid_Calculator() {
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        // adding buttons to the frame
        f.add(t1);
        f.add(t2);
        f.add(t3);
        f.add(b4);
        f.add(b5);
        f.add(b6);
        // setting grid layout of 3 rows and 3 columns
        f.setLayout(new GridLayout(2, 3));
        f.setSize(300, 300);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        int a = Integer.parseInt(t1.getText());
        int b = Integer.parseInt(t2.getText());
        int c;
        if (e.getSource().equals(b4)) {
            c = a + b;
            t3.setText(String.valueOf(c));
        } else if (e.getSource().equals(b4)) {
            c = a - b;
            t3.setText(String.valueOf(c));
        } else if (e.getSource().equals(b4)) {
            c = a * b;
            t3.setText(String.valueOf(c));
        }
    }

    public static void main(String[] args) {
        new Grid_Calculator();
    }
}