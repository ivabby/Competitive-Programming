import java.math.BigInteger;
import java.util.Scanner;

public class Q16 {
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-->0)
        {
            int n = scanner.nextInt();
            BigInteger power = BigInteger.valueOf(2);
            power = power.pow(n);
            String s = power.toString();
            BigInteger sum = BigInteger.ZERO;
            for(int i=0;i<s.length();i++)
            {
                sum = sum.add(BigInteger.valueOf(Integer.parseInt(s.charAt(i)+"")));
            }
            System.out.println(sum);
        }
    }
}
