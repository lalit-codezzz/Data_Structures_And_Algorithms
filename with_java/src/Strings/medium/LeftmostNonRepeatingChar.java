package Strings.medium;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class LeftmostNonRepeatingChar {

    // TC - O(n^2)
    // SC - O(1)
    public static int find1 (String s) {

        short[] hash = new short[26];

        boolean[] visited = new boolean[26];

        for (int i = 0; i < s.length() - 1; ++i) {
            boolean found = false;
            for (int j = i + 1; j < s.length(); ++j) {
                if (s.charAt(i) == s.charAt(j) && !visited[s.charAt(i) - 'a']) {
                    visited[s.charAt(i) - 'a'] = true;
                    found = true;
                    break;
                }
            }

            if (!found && !visited[s.charAt(i) - 'a']) {
                return i;
            }

        }

        return -1;
    }

    // TC - O(n)
    // SC - O(n)
    public static int find2(String s) {

        int ans = -1;

        HashMap<Character, Integer[]> map = new HashMap<>();

        for (int i = 0; i < s.length(); ++i) {

            if (map.get(s.charAt(i)) == null) {
                Integer[] arr = new Integer[2];
                arr[0] = 1;
                arr[1] = i;
                map.put(s.charAt(i), arr);
            } else {
                Integer[] arr = map.get(s.charAt(i));
                arr[0] += 1;
            }
        }
        for(Map.Entry<Character, Integer[]> ele: map.entrySet()) {
            Integer[] arr = ele.getValue();
            if (arr[0] == 1 && ans == -1) {
                ans = arr[1];
            } else if (arr[0] == 1 && arr[1] < ans) {
                ans = arr[1];
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        String s1 = "geeksforgeeks";
        String s2 = "abcabc";
        String s3 = "apple";

        System.out.println(find1(s2));

        System.out.println(find2(s2));

    }
}
