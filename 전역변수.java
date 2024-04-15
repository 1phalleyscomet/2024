import java.util.Scanner;
public class main{
  static int g1,g2;

static void sub1(int n){
  g1=10; g2=g2+1;
}
public static void main(String[] args){
int n = 5;
  g1=2; g2=3;
  System.out.println("before"+g1+" "+g2);
  sub1(n+1);
  System.out.println("after"+g1+" "+g2);
}
}
