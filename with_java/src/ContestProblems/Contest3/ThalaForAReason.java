package ContestProblems.Contest3;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class ThalaForAReason {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(new StringTokenizer(br.readLine()).nextToken());


        int[] arr = new int[n];

        for (int i = 0; i < n; ++i) {
            StringTokenizer stz = new StringTokenizer(br.readLine());
            arr[i] = Integer.parseInt(stz.nextToken());
        }

        for (int i = 0; i < n; ++i) {
            int ele = arr[i];
            int sum = 0;
            while(ele > 0) {
                sum += ele % 10;
                ele /= 10;
            }

            if (sum == 7) {
                System.out.println("Thala for a reason");
            } else {
                System.out.println("Blocked for no reason");
            }

        }

    }
}
