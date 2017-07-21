// you can also use imports, for example:
import java.util.Arrays;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A) {
        Arrays.sort(A);
        int l = A.length;
        int first, sec;
        sec = A[l-1];
        if(sec < 0)
            return sec * A[l-2] * A[l-3];
        first = Math.max((A[0] * A[1]), (A[l-3] * A[l-2]));
        return sec * first;
    }
}