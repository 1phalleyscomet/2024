package jave;

import java.util.Scanner;

public class p5 {
    static int[][] points = {{0, 0}, {2, 0}, {3, 0}, {4, 3}, {2, 5}};
    static int[][][] triangles = {
        {points[0], points[1], points[2]},
        {points[0], points[1], points[3]},
        {points[0], points[1], points[4]},
        {points[0], points[2], points[3]},
        {points[0], points[2], points[4]},
        {points[0], points[3], points[4]},
        {points[1], points[2], points[3]},
        {points[1], points[2], points[4]},
        {points[1], points[3], points[4]},
        {points[2], points[3], points[4]}
    };

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("좌표 입력 (x y):");
        int x = sc.nextInt();
        int y = sc.nextInt();

    }
}
