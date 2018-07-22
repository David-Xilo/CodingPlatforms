// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    
    private boolean isFeasible(int K, int bissection, int[] A) {
        int numberOfDivisions = 1;
        int sum = 0;
        for(int a : A) {
            if(sum + a <= bissection) {
                sum += a;
            } else {
                if(numberOfDivisions + 1 > K) return false;
                ++numberOfDivisions;
                sum = a;
            }
        }
        return true;
    }
    
    public int solution(int K, int M, int[] A) {
        // we know the lower bound to this problem
        // and we also know the upper bound.
        // the strategy is to do a binary search between these 2 bounds
        // obtaining at each step a value V that we're searching
        // checking on each step of the search if we can obtain a sum of blocks < V with K blocks or less
        // the binary search takes O(logN) and we have to iterate the N elements on each steps
        int upperBound = 0;
        int maxElement = 0;
        for(int a : A) {
            upperBound += a;
            if(a > maxElement) maxElement = a;
        } 
        int lowerBound = maxElement;
        if(A.length == 0) return 0;
        if(A.length == 1) return upperBound;
        int result = upperBound;
        while(lowerBound <= upperBound) {
            int bissection = (lowerBound + upperBound) / 2;
            if(isFeasible(K, bissection, A)) {
                upperBound = bissection - 1;
                result = bissection;
            } else {
                lowerBound = bissection + 1;
            }
        }
        return result;
    }
}