package com.test;

import java.lang.reflect.Array;

public class challenge_10 {
    public static double arraySum(double[] numbers){
        double sum = 0;
        for (double number: numbers){
            sum += number;
        }
        return sum;
    }
}
