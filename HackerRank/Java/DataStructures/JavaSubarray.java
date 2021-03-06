
import java.io.*;
import java.util.*;

public class JavaSubarray {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int arr[] = new int[size];
        for(int i = 0; i < size; ++i){
            arr[i] = sc.nextInt();
        }
        int count = 0;
        for(int i = 0; i < size; ++i){
            int sum = arr[i];
            for(int j = i + 1; j < size; ++j){
                if(sum < 0)
                    ++count;
                sum += arr[j];
            }
            if(sum < 0)
                ++count;
        }
        System.out.println(count);
    }
}