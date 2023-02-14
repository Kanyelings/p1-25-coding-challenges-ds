package com.test;

public class challenge_4 {
    public static void multiplicationTable_1_To_10(){
        for (int base = 1; base <= 10; base ++){
            int mul = 0;
            while (mul <= 12) {
                System.out.println(String.valueOf(base) + " * " + String.valueOf(mul) + " = " + String.valueOf(mul * base));
                mul += 1;
            }
        }
    }
}
