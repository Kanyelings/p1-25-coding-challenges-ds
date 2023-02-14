package com.test;

public class challenge_22 {
    public static int[] reverse(int[] arr){
        int[] rev = new int[arr.length];
        int ind = arr.length - 1;
        for (int i = 0; i<arr.length; i++){
            rev[i] = arr[ind];
            ind -= 1;
        }
        return rev;
    }
    public static String[] reverse(String[] arr){
        String[] rev = new String[arr.length];
        int ind = arr.length - 1;
        for (int i = 0; i<arr.length; i++){
            rev[i] = arr[ind];
            ind -= 1;
        }
        return rev;
    }
    public static boolean[] reverse(boolean[] arr){
        boolean[] rev = new boolean[arr.length];
        int ind = arr.length - 1;
        for (int i = 0; i<arr.length; i++){
            rev[i] = arr[ind];
            ind -= 1;
        }
        return rev;
    }
}
