package jave;

import java.util.Scanner;

public class p2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("기준 문자열 s:");
        String s = sc.next();
        System.out.println("추가 문자열 t:");
        String t = sc.next();

        String left = s + t;
        String right = t + s;

        boolean Palinl = Palin(left);
        boolean Palinr = Palin(right);

        if (Palinl && Palinr) {
            System.out.println("Both");
        } else if (Palinl) {
            System.out.println("Left");
        } else if (Palinr) {
            System.out.println("Right");
        } else {
            System.out.println("None");
        }
    }

    static boolean Palin(String ll){
        int l=0, r=ll.length()-1;
        while(l<r){
          if(ll.charAt(l) != ll.charAt(r)) return false;
        }
        return true;
    }
}
