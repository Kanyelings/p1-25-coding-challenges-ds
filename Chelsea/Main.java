package com.test;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        challenge1.print_1_to_10();
        challenge_2.oddLessThan_100();
        challenge_3.multiplicationTable_7();
        challenge_4.multiplicationTable_1_To_10();
        challenge_5.SumFrom_1_to_10();
        challenge_6._10_factorial();
        challenge_7.sumOfEvenGreaterThan_10_and_LessThan_30();
        System.out.println(challenge_8.celciusToFerenheit(1));
        System.out.println(challenge_9.ferenheitToDegree(33.8));
        System.out.println(challenge_10.arraySum(new double[]{1,1,1,1}));
        System.out.println(challenge_11.arrayAverage(new double[]{1,1,1,1}));
        System.out.println(Arrays.toString(challenge_12.positiveSort(new double[]{1, -2, 3, 4, -6})));
        System.out.println(challenge_13.maxSort(new double[]{1,2,78,3,4,2}));
        challenge_14.fibronacci_10();
        System.out.println(challenge_15.fibronacci(7));
        System.out.println(challenge_16.isPrime(-5));
        System.out.println(challenge_17.numericSum(6666));
        challenge_18.first_100_Prime();
        System.out.println(Arrays.toString(challenge_19.firstPrimeNumbers(9, 4)));

    }
}
