import java.util.Scanner;
public class main {
  static void sub2(int n){
    int a =25;
    n = n+1;
    System.out.println("sub2"+n+" "+a);
  }
  static void sub1(int n){
    int a =15;
    n = n+1;
    sub2(n):
      System.out.println("sub1"+n+" "+a);
  }
  public static void main(String[] args){
int n=3,a=5;
    sub1(n);
    System.out.println("Main"+n+" "+a);
  }
}
