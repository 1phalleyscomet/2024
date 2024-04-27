package jave;

import java.util.Scanner;

public class p3{
	 static boolean IsPrime(int n){
		    if (n ==1) return false;
		    for (int i = 2;i*i<=n;i++)
		      if (n %i==0) return false;
		    return true;
		
	 }
	 public static void main(String[] args){
		    Scanner sc = new Scanner(System.in);
		    int n = sc.nextInt();
		    sc.close();
		    int a =0;
		    for (int i =0;i>=n-i;i++){
		        if (IsPrime(i)==false)
		        	continue;
		        else if (IsPrime(i)==true) {
		        	if (IsPrime(n-i)==false)
		        		continue;
		        	else
		        		a += 1;
		        }
	 }
		    System.out.print(a);
	 }
}
