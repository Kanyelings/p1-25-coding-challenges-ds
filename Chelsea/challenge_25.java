package com.test;

public class challenge_25 {
    public static int[] sort(int[] arr1, int[] arr2){
        int size = 0;
        boolean test;
        for (int i: arr1){
            test = true;
            for (int j: arr2){
                if (i == j) {
                    test = false;
                    break;
                }
            }
            if (test) size ++;
        }
        for (int i: arr2){
            test = true;
            for (int j: arr1){
                if (i == j) {
                    test = false;
                    break;
                }
            }
            if (test) size ++;
        }
        int[] ret = new int[size];
        int ind = 0;
        for (int i: arr1){
            test = true;
            for (int j: arr2){
                if (i == j){
                    test = false;
                    break;
                }
            }
            if (test) {
                ret[ind] = i;
                ind += 1;
            }
        }
        for (int i: arr2){
            test = true;
            for (int j: arr1){
                if (i == j){
                    test = false;
                    break;
                }
            }
            if (test) {
                ret[ind] = i;
                ind += 1;
            }
        }
        return ret;
    }
}
