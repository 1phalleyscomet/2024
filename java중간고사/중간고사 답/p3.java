import java.util.Scanner;

public class p3 {
	static boolean IsPrime(int n) {
	    if (n==1) return false;
	    for (int i=2; i*i <=n; i++) 
		if (n % i ==0) return false;
	    return true;
	 }

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.close();
		int cnt =0;
		for (int i=2; i< n-1; i++) {
			if (IsPrime(i)== true && IsPrime(n-i)==true) cnt++;
		}
		System.out.println(cnt);

	}
}
