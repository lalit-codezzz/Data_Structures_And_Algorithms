package ContestProblems.Contest3;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class BalancedString {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        int cntA = 0, cntB = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str.charAt(i) == 'a') {
                cntA++;
            } else {
                cntB++;
            }
        }

        if (cntA == cntB) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

    }
}
