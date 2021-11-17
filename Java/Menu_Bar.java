import java.applet.Applet;
import java.awt.*;

public class Menu_Bar extends Applet {
    public void init() {
        Frame f1 = new Frame("Menu");
        MenuBar b1 = new MenuBar();
        Menu fileMenu = new Menu("File");
        MenuItem neww = new MenuItem("New");
        MenuItem save = new MenuItem("Save");
        MenuItem saveas = new MenuItem("Save As");
        MenuItem close = new MenuItem("Close");

        fileMenu.add(neww);
        fileMenu.add(save);
        fileMenu.add(saveas);
        fileMenu.add(close);
        b1.add(fileMenu);

        f1.setMenuBar(b1);
        f1.setLayout(null);
        f1.setSize(400, 400);
        f1.setVisible(true);
    }
}
