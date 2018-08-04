// you can also use imports, for example:
import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    
    private void sieve(int N,  List<Integer> primes) {
        boolean[] primesTable = new boolean[N + 1];
        Arrays.fill(primesTable, Boolean.TRUE);
        primesTable[0] = false;
        primesTable[1] = false;
        int i = 2;
        while(i * i <= N) {
            if(primesTable[i]) {
                int k = i * i;
                while(k <= N) {
                    primesTable[k] = false;
                    k += i;
                }
            }
            i += 1;
        }
        for(int j = 0; j < primesTable.length; ++j) {
            if(primesTable[j]) primes.add(j);
        }
    }
    
    private void semiPrimes(int N, List<Integer> primes, int[] semiTable) {
        for(int i = 0; i < primes.size(); ++i) {
            for(int j = i; j < primes.size(); ++j) {
                long semi = (long)primes.get(i) * (long)primes.get(j);
                if(semi > N) break;
                semiTable[(int)semi] = 1;
            }
        }
    }
    
    private void fillSemiTable(int[] semiTable) {
        int count = 0;
        for(int i = 0; i < semiTable.length; ++i) {
            if(semiTable[i] != 0)
                semiTable[i] = ++count;
            else 
                semiTable[i] = count;
        }
    }
    
    public int[] solution(int N, int[] P, int[] Q) {
        List<Integer> primes = new ArrayList<Integer>();
        int[] semiTable = new int[N + 1];
        sieve(N, primes);
        semiPrimes(N, primes, semiTable);
        fillSemiTable(semiTable);
        int[] result = new int[P.length];
        for(int i = 0; i < P.length; ++i) {
            result[i] = semiTable[Q[i]] - semiTable[P[i] - 1];
        }
        return result;
    }
}