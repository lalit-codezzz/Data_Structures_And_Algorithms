package Arrays.medium;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class RangeSumQuery {

    // TC - O(n*q) ~ O(n^2)
    // SC - O(1)
    public static void naiveSol(int l, int r, int[] arr) {
        long sum = 0;
        for (int i = l; i < r; ++i) {
            sum += arr[i];
        }
        System.out.println(sum);
    }

    // TC - O(n + q) ~ O(n)
    // SC - O(n)
    public static long[] optimizedSol(int[] arr) {
        long[] pSum = new long[arr.length];
        int sum = 0;
        for (int i = 0; i < pSum.length; ++i) {
            sum += arr[i];
            pSum[i] = sum;
        }
        return pSum;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n, q;
        n = Integer.parseInt(br.readLine());

        int[] arr = new int[n];

        StringTokenizer stz1 = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; ++i) {
            arr[i] = Integer.parseInt( stz1.nextToken());
        }

        // for running optimizedSol
        long[] pSum = optimizedSol(arr);
        System.out.println(Arrays.toString(pSum));

        q = Integer.parseInt(br.readLine());

        while(q > 0) {
            StringTokenizer stz2 = new StringTokenizer(br.readLine());
            int l, r;
            l = Integer.parseInt(stz2.nextToken());
            r = Integer.parseInt(stz2.nextToken());
            // naiveSol(l-1, r, arr);

            if ((l - 1) == 0) System.out.println(pSum[r - 1]);
            else {
                System.out.println(pSum[r - 1] - pSum[l - 2]);
            }
            q--;
        }

    }
}
