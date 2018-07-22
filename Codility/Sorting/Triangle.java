// you can also use imports, for example:
// import java.util.*;
import java.lang.Math.*;
import java.util.Arrays;
// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    
    private boolean triangleCondition(int a, int b, int c) {
        return a > 0 &&
               b > 0 &&
               c > 0 &&
                (a + b > c || 
                (a == b && b == c));
    }
    
    public int solution(int[] A) {
        if(A.length < 3) return 0;
        Arrays.sort(A);
        int i = 2; 
        int result = 0;
        while(i<A.length) {
            int j = i-2, k = i-1;
            if(triangleCondition(A[j], A[k], A[i])) {
                return 1;
            }else{
                ++i;
            }
        }
        return result;
    }
}