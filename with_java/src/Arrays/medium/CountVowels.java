package Arrays.medium;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CountVowels {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n, q;
        n = Integer.parseInt(br.readLine());

        String str = br.readLine();

        long[] pSum = new long[n];
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u') {
                cnt++;
            }
            pSum[i] = cnt;
        }

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
