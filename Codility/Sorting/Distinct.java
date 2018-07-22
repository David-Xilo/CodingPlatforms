// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    
    private void merge(int[] A, int l, int midPoint, int r) {
        int sizeLeft = (midPoint - l) + 1;
        int sizeRight = (r - midPoint);
        int L[] = new int[sizeLeft];
        int R[] = new int[sizeRight];
        
        for (int i = 0; i<sizeLeft; ++i) {
            L[i] = A[l + i];
        }
        for (int i = 0; i<sizeRight; ++i) {
            R[i] = A[midPoint + i + 1];
        }
        
        int i = 0, j = 0, k = l;
        while(i < sizeLeft && j < sizeRight) {
            if (L[i] <= R[j]) {
                A[k] = L[i];
                ++i;
            }else{
                A[k] = R[j];
                ++j;
            }
            ++k;
        }
        while(i < sizeLeft) {
            A[k] = L[i];
            ++i;
            ++k;
        }
        while(j < sizeRight) {
            A[k] = R[j];
            ++k;
            ++j;
        }
    }
    
    private void mergeSort(int[] A, int l, int r) {
        if(l < r) {
            int midPoint = (l + r) / 2;
            mergeSort(A, l, midPoint);
            mergeSort(A, midPoint + 1, r);
            merge(A, l, midPoint, r);
        }
    }
    
    public int solution(int[] A) {
        if(A.length == 0) return 0;
        mergeSort(A, 0, A.length-1);
        int count = 1;
        for (int i = 1; i < A.length; ++i) {
            if(A[i] != A[i - 1]) {
                ++count;
            }
        }
        return count;
    }
}