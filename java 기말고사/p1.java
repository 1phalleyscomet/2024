package jave;

import java.util.Scanner;

public class p1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("점수 입력:");
        int[] scores = new int[8];
        for (int i = 0; i < 8; i++) {
            scores[i] = sc.nextInt();
        }

   
        int[] players = new int[8];
        for (int i = 0; i < 8; i++) {
            players[i] = i;
        }

  
 
    }
}
