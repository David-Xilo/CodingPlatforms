import java.io.*;
import java.util.*;

public class JavaExceptionHandlingTryCatch {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
	       System.out.println(sc.nextInt()/sc.nextInt());
        } catch (InputMismatchException imex) {
	       System.out.println(imex.getClass().getName());
        } catch (ArithmeticException aex) {
	       System.out.println(aex);
        }
    }
}