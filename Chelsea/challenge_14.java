package com.test;

public class challenge_14 {
    public static void fibronacci_10(){
        for (int base = 1; base <= 10; base++){
            int fib = 0;
            for (int temp = 1; temp <= base; temp++) {
                fib += temp;
            }
            System.out.println(fib);
        }
    }
}
