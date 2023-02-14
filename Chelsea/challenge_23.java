package com.test;

public class challenge_23 {
    public static String reverse(String s){
        String rev = "";
        int temp = s.length() - 1;
        while (temp != -1){
            rev += s.charAt(temp);
            temp -= 1;
        }
        return rev;
    }
}
