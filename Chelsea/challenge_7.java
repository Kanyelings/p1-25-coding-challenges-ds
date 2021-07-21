package com.test;

public class challenge_7 {
    public static void sumOfEvenGreaterThan_10_and_LessThan_30(){
        int sum = 0;
        for (int num = 11; num < 30; num ++){
            if (num % 2 == 0)
                sum += num;
        }
        System.out.println(sum);
    }
}
