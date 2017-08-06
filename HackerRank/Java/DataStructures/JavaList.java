import java.io.*;
import java.util.*;

public class JavaList {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < N; ++i){
            int n = scan.nextInt();
            list.add(n);
        }
        int Q = scan.nextInt();
        for(int i = 0; i < Q; ++i){
            if(scan.next().equals("Insert")){
                int pos = scan.nextInt();
                int val = scan.nextInt();
                list.add(pos, val);
            }else{
                int pos = scan.nextInt();
                list.remove(pos);
            }
        }
        for(int i : list){
            System.out.print(i);
            System.out.print(" ");
        }
    }
}
