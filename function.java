import java.util.Scanner;
public class main{
  static int poly (int x){
    int y = x*x;
    y = y -x;
    return y;
  }
public static void main(String[] args){
  int u =4;
  int t = poly(3);
  System.out.println(poly(u-2));
  System.out.println(t);
  System.out.println(poly(poly(3)));
  u = poly(u);
  System.out.println(u+5);
}
}
