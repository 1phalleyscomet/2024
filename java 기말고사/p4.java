package jave;

import java.util.Scanner;

public class p4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] A = new int[4][4];

 
        A[0][0] = 1;
        A[0][1] = 2;
        A[0][2] = 3;
        A[0][3] = 4;

        System.out.println("A[1][0], A[2][0], A[3][0]:");
        A[1][0] = sc.nextInt();
        A[2][0] = sc.nextInt();
        A[3][0] = sc.nextInt();


        for (int a = 1; a < 4; a++) {
            for (int b = 1; b < 4; b++) {
                A[a][b] = A[a - 1][b] + A[a][b - 1];
            }
        }

        int sum = 0;
        for (int a = 0; a < 4; a++) {
            for (int b = 0; b < 4; b++) {
                sum += A[a][b];
            }
        }

        System.out.println(sum);
    }
}
