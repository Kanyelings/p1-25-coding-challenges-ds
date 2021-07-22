package com.test;

public class challenge_18 {
    public static void first_100_Prime(){
        int count = 0, number = 2;
        boolean test = true;
        while (count != 100){
            test = true;
         for (int num = 1; num < number; num++){
             if (number % num == 0 && num != 1){
                 test = false;
                 break;
             }
         }
         if (test){
             System.out.println(number);
             count += 1;
         }
         number += 1;
        }
    }
}
