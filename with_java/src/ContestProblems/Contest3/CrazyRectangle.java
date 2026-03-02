package ContestProblems.Contest3;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CrazyRectangle {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer stz = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(stz.nextToken());
        int m = Integer.parseInt(stz.nextToken());

        int num = 1;
        char ch = 'a', turn = 'n';
        for (int i = 0; i < n; ++i) {
            StringBuilder sb = new StringBuilder();
            for (int j = 0; j < m; ++j) {
                if (turn == 'n') {
                    sb.append(num);
                    if (num == 9) num = 0;
                    num++;
                    turn = 'a';
                } else {
                    sb.append(ch);
                    if (ch == 'z') ch = '`';
                    ch = (char)((int)ch+1);
                    turn = 'n';
                }
            }
            System.out.println(sb);
        }


    }
}
