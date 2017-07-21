import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class JavaArrayList {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        List<List<Integer>> group = new ArrayList<List<Integer>>(t); 
        for(int i = 0; i < t; ++i){
            int e = s.nextInt();
            List<Integer> newList = new ArrayList<Integer>(e);
            for(int j = 0; j < e; ++j){
                newList.add(s.nextInt());
            }
            group.add(newList);
        }
        int q = s.nextInt();
        for(int i = 0; i < q; ++i){
            int l = s.nextInt();
            int c = s.nextInt();
            --l;
            --c;
            if(l >= 0 && l < group.size() && c >= 0 && group.get(l).size() > c){
                System.out.println(group.get(l).get(c));
            }else{
                System.out.println("ERROR!");
            }
        }
    }
}
