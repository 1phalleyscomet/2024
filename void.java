import java.util.Scanner;
public class main{
static void PutSpace(int n){
for (int j=0;j<n;j++)
System.out.print(" ");
}
  static void PutStar(int n){
    for (int j=0;j<n;j++)
      System.out.print("*");
  }
  public static void main (String[] atgs){
    Scanner sc = new Scanner (System.in);
    int n = sc.nextInt();
    sc.close();
    for (int i =0;i<n;i++){
      PutSpace(n-i-1);
      PutStar(2*i+1);
      System.out.println();
    }
  }
}
