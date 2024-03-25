import java.util.Scanner;

public class euclid{
  public static void main(String[] args){
   Scanner sc = new Scanner(System.in);
    int A = sc.nextInt();
    int B = sc.nextInt();
    sc.close();

    int t, a=A, b=B;
    if(a<b){
      t=a;
      a=b;
      b=t;
    }
    while(b>0){
      t=b;
      b=(a%b);
      a=t;
    }
    System.out.println(a);
    System.out.println((A*B)/a);
  }
}