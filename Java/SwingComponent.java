import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JComponent;
import javax.swing.JFrame;

public class SwingComponent {
    public static void main(String[] args) {
        Comp c1 = new Comp();
        JFrame f = new JFrame("JComponent Example");
        f.setSize(300, 200);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.add(c1);
        f.setVisible(true);
    }
}

class Comp extends JComponent {
    public void paint(Graphics g) {
        g.setColor(Color.green);
        g.fillRect(30, 30, 100, 100);
    }
}