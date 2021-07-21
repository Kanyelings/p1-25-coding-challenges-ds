package com.test;

public class challenge_16 {
    public static boolean isPrime(int number){
        boolean ret = true;
        if (number > 0){
            for (int n = 1; n <= number; n++){
                if ((number % n == 0) && (n != 1 && n != number)){
                    ret = false;
                }
            }
        }
        else {
            for (int n = -1; n <= number; n--) {
                if ((number % n == 0) && (n != 1 && n != number)) {
                    ret = false;
                }
            }
        }
        return ret;
    }
}
