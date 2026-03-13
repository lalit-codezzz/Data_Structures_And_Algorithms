package Arrays.medium;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CountNumbersWithExactlyKFactors {

    public static int findFactors (int n) {
        if (n == 1) return 1;

        int cnt = 2;

        for (int i = 2; (i * i) <= n; ++i) {
            if (n % i == 0) {

                cnt++;

                if ((n % (n / i) == 0) && (i != (n / i))) {
                    cnt++;
                }

            }
        }
        return cnt;
    }

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n, q, k;
        StringTokenizer stz1 = new StringTokenizer(br.readLine());
        n = Integer.parseInt(stz1.nextToken());
        q = Integer.parseInt(stz1.nextToken());
        k = Integer.parseInt(stz1.nextToken());

        int[] arr = new int[n];
        StringTokenizer stz2 = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; ++i) {
            arr[i] = Integer.parseInt(stz2.nextToken());
        }

        int[] pSum = new int[n];
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            int factors = findFactors(arr[i]);
            if (factors == k) {
                cnt++;
            }
            pSum[i] = cnt;
        }

        while(q > 0) {
            StringTokenizer stz3 = new StringTokenizer(br.readLine());
            int l, r;
            l = Integer.parseInt(stz3.nextToken());
            r = Integer.parseInt(stz3.nextToken());
            l--;
            r--;

            if ((l) == 0) System.out.println(pSum[r]);
            else {
                System.out.println(pSum[r] - pSum[l - 1]);
            }
            q--;
        }

    }
}
