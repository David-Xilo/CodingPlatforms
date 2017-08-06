import java.util.*;

public class Java1DArrayPart2 {
    public static boolean canWin(int leap, int[] game) {
        int N = game.length - 1;
        Stack<Integer> stack = new Stack<>();
        boolean[] visited = new boolean[N + 1];
        stack.push(0);
        while(!stack.isEmpty()){
            int house = stack.pop();
            visited[house] = true;
            if( house + 1 > N || house + leap > N)
                return true;
            
            if(house - 1 >= 0 && game[house - 1] == 0){
                if(!visited[house - 1])
                    stack.push(house - 1);
            }
            if(game[house + 1] == 0){
                if(!visited[house + 1])
                    stack.push(house + 1);
            }
            if(game[house + leap] == 0){
                if(!visited[house + leap])
                    stack.push(house + leap);
            }
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        while (q-- > 0) {
            int n = scan.nextInt();
            int leap = scan.nextInt();
            
            int[] game = new int[n];
            for (int i = 0; i < n; i++) {
                game[i] = scan.nextInt();
            }

            System.out.println( (canWin(leap, game)) ? "YES" : "NO" );
        }
        scan.close();
    }
}
