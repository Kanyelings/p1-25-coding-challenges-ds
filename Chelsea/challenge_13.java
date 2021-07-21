package com.test;

public class challenge_13 {
    public static double maxSort(double[] numbers){
        double max = 0;
        if (numbers.length != 0) {
            max = numbers[0];
            for (int index = 0; index < numbers.length - 1; index++) {
                if (numbers[index + 1] > max) {
                    max = numbers[index + 1];
                }
            }
        }
        return max;
    }
}
