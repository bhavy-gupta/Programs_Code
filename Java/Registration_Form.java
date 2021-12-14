import java.awt.*;

class Registration_Form {
    Registration_Form() {
        Frame f = new Frame();
        f.setTitle("Student Admission Form ");
        f.setLayout(null);
        Label l1 = new Label("Name : ");
        l1.setBounds(50, 50, 100, 20);
        Label l2 = new Label("Email : ");
        l2.setBounds(50, 75, 100, 20);
        Label l3 = new Label("Password : ");
        l3.setBounds(50, 100, 100, 20);
        Label l4 = new Label("Phone Number : ");
        l4.setBounds(50, 125, 100, 20);
        Label l5 = new Label("Gender : ");
        l5.setBounds(50, 150, 100, 20);
        Label l6 = new Label("Language : ");
        l6.setBounds(50, 175, 100, 20);
        Label l7 = new Label("Zip Code : ");
        l7.setBounds(50, 200, 100, 20);
        Label l8 = new Label("About : ");
        l8.setBounds(50, 225, 100, 20);
        TextField tf1 = new TextField("your name");
        tf1.setBounds(150, 50, 150, 20);
        TextField tf2 = new TextField("your email");
        tf2.setBounds(150, 75, 150, 20);
        TextField tf3 = new TextField(20);
        tf3.setBounds(150, 100, 150, 20);
        TextField tf4 = new TextField(15);
        tf4.setBounds(150, 125, 150, 20);
        TextField tf5 = new TextField(10);
        CheckboxGroup cbg = new CheckboxGroup();
        Checkbox c1 = new Checkbox("Male", cbg, false);
        c1.setBounds(150, 150, 40, 20);
        Checkbox c2 = new Checkbox("Female", cbg, false);
        c2.setBounds(200, 150, 60, 20);
        Checkbox c3 = new Checkbox("Other", cbg, false);
        c3.setBounds(280, 150, 50, 20);
        Choice ch = new Choice();
        ch.setBounds(150, 175, 150, 20);
        ch.add("Select Language ");
        ch.add("Java");
        ch.add("Phyton");
        ch.add("C");
        ch.add("C++");
        tf5.setBounds(150, 200, 150, 20);
        TextField tf6 = new TextField("Write about yourself");
        tf6.setBounds(150, 225, 150, 20);
        Button b = new Button("Register");
        b.setBounds(100, 250, 150, 20);
        f.add(l1);
        f.add(tf1);
        f.add(l2);
        f.add(tf2);
        f.add(l3);
        f.add(tf3);
        f.add(l4);
        f.add(tf4);
        f.add(l5);
        f.add(c1);
        f.add(c2);
        f.add(c3);
        f.add(l6);
        f.add(ch);
        f.add(l7);
        f.add(tf5);
        f.add(l8);
        f.add(tf6);
        f.add(b);
        f.setSize(500, 500);
        f.setVisible(true);

    }

    public static void main(String args[]) {
        new Registration_Form();
    }
}