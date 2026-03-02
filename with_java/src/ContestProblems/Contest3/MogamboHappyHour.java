package ContestProblems.Contest3;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class MogamboHappyHour {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        str = br.readLine();
        StringTokenizer stz = new StringTokenizer(str, ":");
        String s1 = stz.nextToken();
        String s2 = stz.nextToken();

        if (s1.equals(s2)) {
            System.out.println("Mogambo is happy");
        } else {
            System.out.println("Mogambo is sad");
        }

    }
}
