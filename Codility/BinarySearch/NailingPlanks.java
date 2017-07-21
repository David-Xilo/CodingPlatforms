// you can also use imports, for example:
import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A, int[] B, int[] C) {
        // first: sort array C, and save original indexes
        // second: search array C the min and max value that can be used to 
        // nail the ith plank, using binary search
        // third: run through array C and check for the sequential values
        int[][] D = new int[C.length][2];
        
        for(int i = 0; i < C.length; ++i){
            D[i][0] = C[i];
            D[i][1] = i;
        }
        Arrays.sort(D, (int[] x, int[] y) -> x[0] - y[0]);
        return 0;
    }
}
