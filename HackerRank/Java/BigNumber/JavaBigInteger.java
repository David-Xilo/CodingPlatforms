
import java.io.*;
import java.util.*;
import java.math.BigInteger;
public class JavaBigInteger {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        BigInteger num1 = in.nextBigInteger();
        BigInteger num2 = in.nextBigInteger();
        System.out.println(num1.add(num2));
        System.out.println(num1.multiply(num2));
    }
}