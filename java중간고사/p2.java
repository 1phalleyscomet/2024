package jave;

import java.util.Scanner;

public class p2 {
public static void main(String[] args) {
Scanner sc = new Scanner (System.in);
int n = sc.nextInt();
sc.close();

int n1=1, n2 = 1, n3=1; 
for (int i=0;i<10;i++) {
	int t = n1+n2+n3;
	t += t;
	

System.out.println(t);
}
}
}