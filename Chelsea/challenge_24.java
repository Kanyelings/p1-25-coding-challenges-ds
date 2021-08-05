package com.test;

public class challenge_24 {
    public static int[] merge(int[] arr1, int[] arr2){
        int[] ret = new int[arr1.length + arr2.length];
        int temp = 0, temp0 = 0;
        for (int i=0; i < arr1.length + arr2.length; i++){
            if (temp < arr1.length) {
                ret[i] = arr1[i];
                temp += 1;
            }
            else{
                ret[i] = arr2[temp0];
                temp0 += 1;
            }
        }
        return ret;
    }
    public static String[] merge(String[] arr1, String[] arr2){
        String[] ret = new String[arr1.length + arr2.length];
        int temp = 0, temp0 = 0;
        for (int i=0; i < arr1.length + arr2.length; i++){
            if (temp < arr1.length) {
                ret[i] = arr1[i];
                temp += 1;
            }
            else{
                ret[i] = arr2[temp0];
                temp0 += 1;
            }
        }
        return ret;
    }
    public static boolean[] merge(boolean[] arr1, boolean[] arr2){
        boolean[] ret = new boolean[arr1.length + arr2.length];
        int temp = 0, temp0 = 0;
        for (int i=0; i < arr1.length + arr2.length; i++){
            if (temp < arr1.length) {
                ret[i] = arr1[i];
                temp += 1;
            }
            else{
                ret[i] = arr2[temp0];
                temp0 += 1;
            }
        }
        return ret;
    }
}
