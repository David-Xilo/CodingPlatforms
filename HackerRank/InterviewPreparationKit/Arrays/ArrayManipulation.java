import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static private long sumIntoResult(long[] result) {
        long max = 0;
        long current = 0;
        for(int i = 0; i < result.length; ++i) {
            current += result[i];
            if(current > max) max = current;
            }
        return max;
    }
    
    static private void intervalIntoResult(long[] result, int start, int end, int value) {
        result[start] += value;
        result[end] -= value;
    }
    
    // Complete the arrayManipulation function below.
    static long arrayManipulation(int n, int[][] queries) {
        long result[] = new long[n+1];
        long max = 0;
        for(int[] query : queries) {
            intervalIntoResult(result, query[0] - 1, query[1], query[2]);
        }
        return sumIntoResult(result);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] nm = scanner.nextLine().split(" ");

        int n = Integer.parseInt(nm[0]);

        int m = Integer.parseInt(nm[1]);

        int[][] queries = new int[m][3];

        for (int i = 0; i < m; i++) {
            String[] queriesRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 3; j++) {
                int queriesItem = Integer.parseInt(queriesRowItems[j]);
                queries[i][j] = queriesItem;
            }
        }

        long result = arrayManipulation(n, queries);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
