package com.test;

public class challenge_17 {
    public static int numericSum(double number){
        int sum = 0;
        while (number != 0){
            sum += number % 10;
            number = Math.floor(number/10);
        }
        return sum;
    }
}
