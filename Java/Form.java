import java.awt.*;
import java.awt.event.*;

class Form extends Frame implements MouseListener {
    Label l1 = new Label("Name");
    Label l2 = new Label("Address");
    Label l3 = new Label("Phone No.:");

    Form() {
        Frame f1 = new Frame();
        f1.addMouseListener(this);
        f1.setLayout(new FlowLayout());
        f1.add(l1);
        f1.add(l2);
        f1.add(l3);
        f1.setSize(300, 300);
        f1.setVisible(true);
    }

    public static void main(String args[]) {
        new Form();
    }

    public void mouseClicked(MouseEvent e) {
        l1.setText("Mouse Clicked");
    }

    public void mousePressed(MouseEvent e) {
        l2.setText("Mouse Pressed");
    }

    public void mouseReleased(MouseEvent e) {
        l2.setText("Mouse Released");
    }

    public void mouseEntered(MouseEvent e) {
        l3.setText("Mouse Entered");
    }

    public void mouseExited(MouseEvent e) {
        l3.setText("Mouse Exited");
    }
}
