package com.test;

public class challenge_6 {
    public static void _10_factorial(){
        int fac = 1, n = 10;
        while (n > 0){
            fac *= n;
            n --;
        }
        System.out.println(fac);
    }
}
