package jave;

import java.util.Arrays;
import java.util.Scanner;

public class p7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("숫자 입력:");
        int[] number = new int[5];
        for (int i = 0; i < 5; i++) {
            number[i] = sc.nextInt();
        }
  
        int[] scores = new int[5];
        for (int i = 0; i < 5; i++) {
            scores[i] = square(number[i]);
        }
        
        Arrays.sort(scores);

        }

    public static int square(int number) {
        int score = 0;
        while (number != 0) {
            int digit = number % 10;
            score += digit * digit;
           
            }
        return score;
    }
}
