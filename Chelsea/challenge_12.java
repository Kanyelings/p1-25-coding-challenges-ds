package com.test;

public class challenge_12 {
    public static double[] positiveSort(double[] numbers){
        int count = 0;
        for (double number: numbers){
            if (number > 0)
                count += 1;
        }
        double[] ret = new double[count];
        count = 0;
        for (double number: numbers){
            if (number > 0){
                ret[count] = number;
                count += 1;
            }
        }
        return ret;
    }
}
