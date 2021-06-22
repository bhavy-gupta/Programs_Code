class My_Thread extends Thread {
    String threadname = new String();

    My_Thread(String name) {
        threadname = name;
    }

    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println("Printing " + threadname + i);
        }
    }
}

class Threadd {
    public static void main(String[] args) {
        My_Thread T1 = new My_Thread("Thread A");
        My_Thread T2 = new My_Thread("Thread B");
        My_Thread T3 = new My_Thread("Thread C");
        T1.start();
        T2.start();
        T3.start();
    }
}