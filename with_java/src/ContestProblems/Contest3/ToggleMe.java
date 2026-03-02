package ContestProblems.Contest3;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class ToggleMe {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        sb.append(br.readLine());

        for (int i = 0; i < sb.length(); ++i) {
            if ((int)sb.charAt(i) >= 65 && (int)sb.charAt(i) <= 90) {
                sb.setCharAt(i, (char)((int)sb.charAt(i) + 32));
            } else {
                sb.setCharAt(i, (char)((int)sb.charAt(i) - 32));
            }
        }

        System.out.println(sb);

    }
}
