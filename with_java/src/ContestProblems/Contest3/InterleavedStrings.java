package ContestProblems.Contest3;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class InterleavedStrings {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s1 = br.readLine();
        String s2 = br.readLine();
        StringBuilder sb = new StringBuilder();
        int n = 0;

        if (s1.length() >= s2.length()) {
            n = s1.length();
        } else {
            n = s2.length();
        }

        for (int i = 0; i < n; ++i) {
            if (i < s1.length()) {
                if (i < s1.length() - 1) {
                    sb.append(s1.charAt(i) + "-");
                } else {
                    if (s1.length() <= s2.length()) {
                        sb.append(s1.charAt(i) + "-");
                    } else {
                        sb.append(s1.charAt(i));
                    }
                }
            }

            if (i < s2.length()) {
                if (i < s2.length() - 1) {
                    sb.append(s2.charAt(i) + "-");
                } else {
                    if (s2.length() < s1.length()) {
                        sb.append(s2.charAt(i) + "-");
                    } else {
                        sb.append(s2.charAt(i));
                    }
                }
            }
        }

        System.out.println(sb);

    }
}
