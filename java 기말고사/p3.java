package jave;

import java.util.Scanner;

public class p3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("N 입력:");
        int N = sc.next();
        int[] numbers = new int[N];

        System.out.println(N + "개의 정수 입력:");
        for (int i = 0; i < N; i++) {
            numbers[i] = sc.next();
        }

    }
}
