
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    private static void sol(int[][] arr){
        int max = 0;
        for(int i = 2; i < 6; ++i){
            for(int j = 2; j < 6; ++j){
                int val = arr[i][j] + arr[i][j - 1] + arr[i][j - 2] 
                    + arr[i - 1][j - 1] + arr[i - 2][j] 
                    + arr[i - 2][j - 1] + arr[i - 2][j - 2];
                if(val > max || (j == 2 && i == 2) )
                    max = val;
            }
        }
        System.out.println(max);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for(int i=0; i < 6; i++){
            for(int j=0; j < 6; j++){
                arr[i][j] = in.nextInt();
            }
        }
        sol(arr);
    }
}
