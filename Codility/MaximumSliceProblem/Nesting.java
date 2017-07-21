// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(String S) {
        // using a stack we can insert elements when the parentisis open
        // and remove when the parentisis close
        // we can do the same for this purpose with a counter
        if(S.isEmpty() || null == S)
            return 1;
        int counter = 0;
        for(int i = 0 ; i < S.length(); ++i){
            if(S.charAt(i) == '(')
                ++counter;
            else
                --counter;
            if(counter < 0)
                return 0;
        }
        if(counter != 0)
            return 0;
        return 1;
    }
}