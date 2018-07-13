class Solution {
    public int solution(int A, int B, int K) {
        int firstValue = A + (A % K);
        if(firstValue != A) {
            firstValue = A + (K - (A % K));
        }
        if(firstValue > B) return 0;
        return 1 + ((B - firstValue) / K);
    }
}