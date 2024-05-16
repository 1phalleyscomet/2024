import java.util.Scanner;

public class p4 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a = sc.nextInt();
		int b = sc.nextInt();
		sc.close();
		int mm = Math.abs(a-b);
		System.out.println(Math.min(mm, n-mm));

	}
}
