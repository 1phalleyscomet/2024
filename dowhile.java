import java.util.Scanner;

public class dowhile{
  public static void main(String[] args){
   Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int dd=n, cnt=0;
    do{
      int d1=dd/10, d2=dd%10;
    int nn = d1+d2;
      dd=d2*10+nn%10;
      cnt++;
      }while(dd!=n);
    System.out.println(cnt);
  }
}