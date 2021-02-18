import java.util.Scanner;
class Atm
{
    public static void main(String args[])
    {
        Double bal;
        int amt;
        Scanner sc = new Scanner(System.in);
        amt=sc.nextInt();
        bal=sc.nextDouble();
        if(amt%5==0 && amt+0.50<=bal)
            bal=bal-amt-0.50;
        System.out.println(bal);
        sc.close();
    }
}