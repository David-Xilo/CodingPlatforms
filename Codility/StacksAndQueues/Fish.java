// you can also use imports, for example:
import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A, int[] B) {
        int survivors = A.length;
        Stack<Integer> downStream = new Stack<Integer>();
        for(int i = 0; i < B.length; ++i) {
            if(B[i] == 1) {
                downStream.push(i);
            }
            if(B[i] == 0 && !downStream.empty()) {
                while(!downStream.empty()) {
                    if(A[downStream.peek()] > A[i]) {
                        --survivors;
                        break;
                    }
                    --survivors;
                    downStream.pop();
                }
            }
        }
        return survivors;
    }
}