package ContestProblems.Contest3;

import java.util.Scanner;

public class StrongPasswordII {


    public static void main(String[] args) {
        String str;
        Scanner scan = new Scanner(System.in);
        str = scan.nextLine();

        boolean lower = false, upper = false, special = false, digit = false;

        for(int i = 0; i < str.length(); ++i) {
            if (((int)str.charAt(i) >= 97 && (int)str.charAt(i) <= 122)) {
                lower = true;
            } else if (((int)str.charAt(i) >= 65 && (int)str.charAt(i) <= 90)) {
                upper = true;
            } else if (((int)str.charAt(i) >= 48 && (int)str.charAt(i) <= 57)) {
                digit = true;
            } else {
                special = true;
            }
        }

        if (lower && upper && digit && special) {
            System.out.println("Strong");
        } else if ((lower && upper && digit) || (lower && upper && special) || (lower && digit && special) || (upper && digit && special)) {
            System.out.println("Moderate");
        }else {
            System.out.println("Weak");
        }

    }
}
