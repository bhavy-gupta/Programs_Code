class String_Cli {
    public static void main(String[] args) {
        String s = "";
        for (int i = args.length - 1; i >= 0; i--) {
            s = s + args[i] + " ";
        }
        System.out.print(s);
    }
}
