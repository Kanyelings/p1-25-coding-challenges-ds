package com.test;

public class challenge_19 {
    public static int[] firstPrimeNumbers(int p, int n){
        int[] prime = new int[p], tests = new int[]{2,3,5,7,11,13};
        int count = -1;
        boolean temp =true ;
        n += 1;
        while (count != p-1){
            temp = true;
            for (int test : tests){
                if (n == test){
                    break;
                }
                else if (n % test == 0){
                    temp = false;
                    n += 1;
                    break;
                }
            }
            if (temp == true){
                count += 1;
                prime[count] = n;
                n += 1;
            }
        }
        return prime;
    }
}
