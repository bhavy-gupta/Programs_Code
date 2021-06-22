class MyThread implements Runnable {
    String threadname = new String();

    MyThread(String name) {
        threadname = name;
    }

    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println(threadname + i);
        }
    }
}

public class Runnable_Interface {
    public static void main(String[] args) {
        MyThread T1 = new MyThread("Thread A");
        MyThread T2 = new MyThread("Thread B");
        MyThread T3 = new MyThread("Thread C");
        T1.start();
        T2.start();
        T3.start();
    }
}