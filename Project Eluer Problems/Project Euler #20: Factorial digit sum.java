import java.io.*;
import java.math.*;

public class Q20 {
    public static void main(String[] args) throws NumberFormatException, IOException {
        // TODO Auto-generated method stub
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n = Integer.parseInt(br.readLine());
            BigInteger mul = BigInteger.ONE;
            for(int i=2;i<=n;i++)
                mul = mul.multiply(BigInteger.valueOf(i));
            String s = mul.toString();
            long sum = 0;
            for(int i=0;i<s.length();i++)
            {
                sum+=Long.parseLong(s.charAt(i)+"");
            }
            System.out.println(sum);
        }
    }
}
