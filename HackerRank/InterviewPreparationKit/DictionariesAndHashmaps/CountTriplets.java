import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the countTriplets function below.
    static long countTriplets(List<Long> arr, long r) {
        Map<Long, Long> firstFactorsMap = new HashMap<Long, Long>();
        Map<Long, Long> secondFactorsMap = new HashMap<Long, Long>();
        long counter = 0;
        for(Long key : arr) {
            if(key % r == 0) { // it's a possible 2nd or 3rd factor
                long prevFactor = key / r;
                // if the tripletMap contains previous factor
                // then key is a 3rd factor
                if(secondFactorsMap.containsKey(prevFactor)) {
                    counter += secondFactorsMap.get(prevFactor);
                }
                // inserts the 2nd factors (and 3rd factors that might be a 2nd factor) 
                // into the map that counts the triplets
                if(firstFactorsMap.containsKey(prevFactor)) {
                    // add values of previous factor
                    long count = firstFactorsMap.get(prevFactor);
                    // add the values we already have
                    if(secondFactorsMap.containsKey(key)) {
                        count += secondFactorsMap.get(key);
                    }
                    secondFactorsMap.put(key, count);
                }
            }
            if(firstFactorsMap.containsKey(key)) {
                long count = firstFactorsMap.get(key) + 1;
                firstFactorsMap.put(key, count);
            } else {
                firstFactorsMap.put(key, 1L);
            }
        }
        return counter;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] nr = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int n = Integer.parseInt(nr[0]);

        long r = Long.parseLong(nr[1]);

        String[] arrItems = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        List<Long> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            long arrItem = Long.parseLong(arrItems[i]);
            arr.add(arrItem);
        }

        long ans = countTriplets(arr, r);

        bufferedWriter.write(String.valueOf(ans));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
