import java.util.Scanner;

public class p2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n1= sc.nextInt();
		int n2= sc.nextInt();
		int n3= sc.nextInt();
		sc.close();
		int ss = 0;
		System.out.println(n1);	
		System.out.println(n2);
		System.out.println(n3);
		ss = n1+n2+n3;
		for (int i=0; i<7; i++) {
			int t = n3;
			n3 = n3+n2+n1;
			n1 = n2;
			n2 = t;
			ss += n3;
//			System.out.println(n3);
		}
		System.out.println(ss);
	}
}
