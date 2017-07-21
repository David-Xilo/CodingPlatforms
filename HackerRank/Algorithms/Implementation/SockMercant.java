import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int sockMerchant(int n, int[] ar) {
        HashMap<Integer, Integer> count = new HashMap<>();
        int total = 0;
        for(int i : ar){
            if(count.containsKey(i)){
                if(count.get(i) + 1 == 2){
                    count.put(i, 0);
                    ++total;
                }else{
                    count.put(i, count.get(i) + 1);    
                }
                
            }else{
                count.put(i, 1);
            }
        }
        return total;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = sockMerchant(n, ar);
        System.out.println(result);
    }
}

