package com.test;

public class challenge_11 {
    public static double arrayAverage(double[] numbers){
        double sum = 0;
        for (double number: numbers){
            sum += number;
        }
        return sum/numbers.length;
    }
}
